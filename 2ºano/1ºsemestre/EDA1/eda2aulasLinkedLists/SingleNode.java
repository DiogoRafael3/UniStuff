package eda2aulasLinkedLists;

public class SingleNode<E> {
	E data;
	SingleNode<E> next;
	
	public SingleNode() {
		this.next=null;
	}
	
	public SingleNode(E data) {
		this.data=data;
		this.next=null;
	}
	
	public SingleNode(E data, SingleNode<E> next) {
		this.data=data;
		this.next=next;
	}
	
	public E data() throws InvalidNodeException{
		if (data==null) {
			throw new InvalidNodeException("no data");
		}
		return data;
	}
	
	public SingleNode<E> getNext(){
		return next;
	}
	
	public void setData(E data) {
		this.data=data;
	}
	
	public void setNext(SingleNode<E> node) {
		this.next=node;
	}

}
