package eda2aulasStacks;
import java.io.*;
import java.util.StringTokenizer;
  

public class ParentMatch {  
	
	  public static boolean isOpenParen(String s){
	   if (s.equals("(") || s.equals("{") || s.equals("["))
		   return true;
	  return false;
	  }
	  
	  public static boolean isCloseParen(String s){
	    if(s.equals(")") || s.equals("}") || s.equals("]"))
	    	return true;
	    return false;
	  }
	  
	  public static boolean marrie(String s, String u){
	    if(s.equals("("))
	    	if (u.equals(")"))
	    		return true;
	    else if(s.equals("["))
	    	if (u.equals("]"))
	    		return true;
	    else if(s.equals("{")) 
	    	if (u.equals("}"))
	    		return true;
	    return false;
	    
	  }
	  
	  public static void main(String[] args){  
		Stack<String> stack= new Stack<>(100);
	    System.out.println("Digite a expressao;");
	    
	    try {
	      BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
	      StringTokenizer st=new StringTokenizer(bf.readLine(),"(){}[]",true);
	     // implementar o algoritmo
	      while(st.hasMoreTokens()){
	    	String x=st.nextToken();
	        if(isOpenParen(x)) {
	        	stack.push(x);
	        }
	        else if(isCloseParen(x))
	        	if(marrie(stack.top(),x)) {
	        		stack.pop();
	        	}
	        	else {
	        		System.out.print("Errado");
	        		System.exit(1);
	        	}   		
	    }
	    if(stack.empty())
	    	System.out.println("Sucesso");
	    else
	    	System.out.println("Errado");
	    }
	    catch(IOException e) {} 
	    catch (StackOverflowException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (EmptyStackException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	  }
}
