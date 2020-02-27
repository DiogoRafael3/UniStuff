package eda2aulasLinkedLists;

import java.util.Iterator;

public class LinkedList<E> implements Iterable<E> {
	int size=0;
	SingleNode<E> head= new SingleNode<E>();
	
	@Override
	public Iterator<E> iterator() {
		return new LinkedListIterator<E>(head.getNext());
	}
	
	public int size(){
		return size;
	}
	
	public boolean isEmpty() {
		return size==0;
	}
	
	public SingleNode<E> header(){
		return head;
	}
	
	public void add(int index, E x) {
		SingleNode<E> node=head;
		for(int y=0; y<index ;y++) {
			node=node.getNext();
		}
		SingleNode<E> newnode= new SingleNode<E>(x, node.getNext());
		node.setNext(newnode);
		size++;
	}
	
	void add(SingleNode<E> prev, E x) throws InvalidNodeException {
		/*SingleNode<E> node=head;
		while(node!=prev) {
			node=node.getNext();
		}*/
		SingleNode<E> newnode= new SingleNode<E>(x, prev.getNext());
		prev.setNext(newnode);
		size++;
	}
	
	void add(E x) {
		add(size, x);
	}
	
	public void remove(E x) throws InvalidNodeException {
		SingleNode<E> node=head;
		while(node.getNext().data()!=x) {
			node=node.getNext();
		}
		node.setNext(node.getNext().getNext());
		size--;
	}
	
	public void remove(int index) throws InvalidNodeException {
		SingleNode<E> node=head;
		for(int y=0; y<index ;y++) {
			node=node.getNext();
		}
		node.setNext(node.getNext().getNext());
		size--;
	}
	
	SingleNode<E> findPrevious(E x) throws InvalidNodeException {     
		SingleNode<E> node=head;
		while(node.getNext().data()!=x) {
			node=node.getNext();
		}
		return node;
	}
	
	public String toString() { 
		SingleNode<E> node=head;
		String tostr = "";
		for(int y=0; y<size ;y++) {
			node=node.getNext();
			try {
				tostr=tostr + node.data() + " ";
			} catch (InvalidNodeException e) {
				e.printStackTrace();
			}
		}
		return tostr;
	}
	
	public void set(int index, E x){
		SingleNode<E> node=head;
		for(int y=0; y<index ;y++) {
			node=node.getNext();
		}
		node.setData(x);
	} 
	
	public E get(int index) throws InvalidNodeException{
		SingleNode<E> node=head;
		for(int y=0; y<index ;y++) {
			node=node.getNext();
		}
		return node.data();
	}
	
	SingleNode<E> getNode(int index){
		SingleNode<E> node=head;
		for(int y=0; y<index ;y++) {
			node=node.getNext();
		}
		return node;
	}

	void destroy() {
		SingleNode<E> node=head;
		node.setNext(null);
		this.size=0;
	}
	
	public SingleNode<E> first(){
		SingleNode<E> node=head;
		return node.getNext();
	}
	
	public SingleNode<E> last(){
		SingleNode<E> node=head;
		while(node.getNext()!=null)
			node=node.getNext();
		return node;
	}
}
