package eda2aulasLinkedLists;

public class LinkedListIterator<E> implements java.util.Iterator<E>{
	SingleNode<E> current;
	
	public LinkedListIterator(SingleNode<E> node) {
		this.current=node;
	}

	@Override
	public boolean hasNext() {
		return current!=null;
	}

	@Override
	public E next() {
		if (hasNext()) {
			E data=current.data;
			current=current.next;
			return data;
		}
		return null;
	}
	
	public void remove() {
		throw new UnsupportedOperationException("não suportado");
	}
	
	
}
