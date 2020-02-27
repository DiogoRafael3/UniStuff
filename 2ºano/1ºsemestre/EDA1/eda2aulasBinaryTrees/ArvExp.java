package eda2aulasBinaryTrees;

import java.util.StringTokenizer;

import eda2aulasStacks.*;

public class ArvExp{


  private static boolean operator(String s){
    return (s.length()==1)&& s.equals("+")|| s.equals("-") || s.equals("*")|| s.equals("/");
  }
  private static boolean isNum(String s){
    try{
    	float f=Float.valueOf(s).floatValue();
    	return true;
    }
    catch (Exception e){/*System.out.println(e.getMessage());*/}
    
    return false;
  }
  
  public static float avalia(ABP<String> x){
    // deve retornar um float correspondente a avaliacao da arvore
	return avalia(x.root);
  }
  
  public static float avalia(BNode<String> n){
    // deve retornar um float correspondente a avaliação da arvore cuja 
    //raiz e n
	if(isNum(n.info()))
		return Float.valueOf(n.info()).floatValue();
	else
		return operacao(n.info(), avalia(n.getLeft()), avalia(n.getRight()));

  }
  
  public static float operacao(String op, float a, float b){
	  switch(op){
	  case "-":
		  return a-b;
	  case "+":
		  return a+b;
	  case "*":
		  return a*b;
	  case "/":
		  return a/b;
	  }
	  return 0;
  } 
  
  
  public static void main(String[] args) throws StackOverflowException, EmptyStackException{
    //String postfix="2 8 - 9 / 7 * 67 7 5 * + 8 7 * / -";
    //String postfix="30 4 2- 5* 7 3+/+";
	String postfix="12.3 10 -";
    Stack<ABP<String>> s=new Stack<ABP<String>>(100);
    String token;
    StringTokenizer st=new StringTokenizer(postfix," *+-/",true);
    while (st.hasMoreTokens()){
      token =st.nextToken();
      System.out.println("lido:"+token);
     // implementar o algoritmo
      if(!token.equals(" ")) {
    	  if(isNum(token)) {
    		 s.push(new ABP<>(token)); 
    	  }
    	  else {
    		  ABP<String> a=s.pop();
    		  ABP<String> b=s.pop();
    		  s.push(new ABP<>(token, b.root, a.root));
    	  }
    	  
    }
    }
    ABP<String> t= s.top();
    
    System.out.println("Em ordem ");
    t.printEmOrdem();
    System.out.println("Pos ordem");
    t.printPosOrdem();
    System.out.println("Pre ordem");
    t.printPreOrdem();
 
    System.out.println(avalia(t));
  }
}
