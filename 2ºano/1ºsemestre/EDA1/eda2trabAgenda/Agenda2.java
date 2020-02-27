package eda2trabAgenda;

public class Agenda2 {
	ABP<Contacto> agenda= new ABP<Contacto>();

	//a
	public void insercao(Contacto contacto) {
		agenda.insere(contacto);
	}
	//b
	public void removepornome(String x) {
		Contacto compare=new Contacto(x,0);
		agenda.remove(compare);
	}

	//c
	public void emordem(BNode<Contacto> node) {
		if(node!=null) {
			emordem(node.getLeft());
			System.out.print(node.info().getNome() + " ");
			emordem(node.getRight());
		}
	}
	
	public void printOrdemAlfabetica() {
		emordem(agenda.getRoot());
		System.out.println();
	}
	//d
	public void encontra(String x) {
		Contacto contacto= new Contacto(x,0);
		BNode<Contacto> node=agenda.find(contacto, agenda.getRoot());
		System.out.println(node.info().getNumero());
	}
	
	//e1
	public void ligar(int numero){
		ABPIterator<Contacto> it = new ABPIterator<>(agenda.getRoot());
        Contacto c = it.next();
        boolean ola = false;
 
        while(it.hasNext()){
            if(c.getNumero()==numero){
                ola = true;
                break;
            }
            c = it.next();
        }
        if(ola)
        	System.out.println("Ligar a "+ c.getNome());
        else
        	System.out.println("Ligar a "+numero);
     
    }
	//e1
	/*public void liga(int x) {
		name(x,root);
	}
	
	public void name(int x, BNode<Contacto> node) {
		if(node!=null) {
			if(node.info.getNumero()==x){
				System.out.print(node.info.getNome() + " ");
			}
			name(x,node.getLeft());
			name(x,node.getRight());
		}
	
	}*/
	public static void main(String[] args) {
		Agenda2 agenda= new Agenda2();
		agenda.insercao(new Contacto("Nick",91));
		agenda.insercao(new Contacto("Alandro",2));
		agenda.insercao(new Contacto("Malandro",42));
		agenda.insercao(new Contacto("Nicolau",4));
		agenda.insercao(new Contacto("Bono",46));
		//agenda.removepornome("Bono");
		agenda.printOrdemAlfabetica();
		agenda.encontra("Malandro");
		agenda.encontra("Alandro");
		agenda.ligar(42);
	}
}
