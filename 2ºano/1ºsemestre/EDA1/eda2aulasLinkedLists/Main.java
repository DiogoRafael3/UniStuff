package eda2aulasLinkedLists;

public class Main {
	public static void main(String[] args) throws InvalidNodeException{
		SingleNode<Integer> node= new SingleNode<Integer>();
		SingleNode<Integer> node1= new SingleNode<Integer>(1,node);
		SingleNode<Integer> node2= new SingleNode<Integer>(2,node1);
		SingleNode<Integer> node3= new SingleNode<Integer>(3,node2);
		
		//System.out.println(node1.data());
		//System.out.println(node1.getNext().data());
		
		
		
		LinkedList<Integer> linked= new LinkedList<Integer>();
		
		linked.add(1);
		linked.add(4);
		//System.out.println(linked.size());
		//linked.add(2);
		//System.out.println(linked.size());
		//linked.add(3);
		//System.out.println(linked.size());
		linked.add(1, 6);
		//System.out.println(linked.size());
		//linked.remove((Integer) 2);
		//System.out.println(linked.toString());
		linked.set(1, 5);
		System.out.println(linked.toString());
		//System.out.println(linked.first().data());
		//System.out.println(linked.last().data());
		
		LinkedList<Integer> linked2= new LinkedList<Integer>();
		

		linked2.add(9);
		linked2.add(80);
		linked2.add(84);
		System.out.println(linked2.toString());
		linked2.size=linked2.size+linked.size;
		SingleNode<Integer> temp1= linked.first();
		SingleNode<Integer> temp2= linked.last();
		SingleNode<Integer> tempnext= linked2.getNode(1).getNext();
		linked2.getNode(1).setNext(temp1);
		temp2.setNext(tempnext);
		System.out.println(linked2.toString());
		linked.destroy();
		System.out.println(linked.toString());
		System.out.println(linked2.toString());
		//Iterator<Integer> iterator=linked.iterator();
		
		/*while(linked.iterator().hasNext()) {
			System.out.println(linked.iterator().next());
			linked.iterator().next();
		}*/
		
		
		
	}
}
