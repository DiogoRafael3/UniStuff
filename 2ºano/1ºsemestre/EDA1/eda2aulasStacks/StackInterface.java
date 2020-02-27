package eda2aulasStacks;

public interface StackInterface<E> {
	void push(E o) throws StackOverflowException; 
	E top();
	E pop() throws EmptyStackException;
	int size();
	boolean empty(); 
}
