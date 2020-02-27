package eda2aulasStacks;

public class Stack<E> implements StackInterface<E>{
	private E[] stack;
	int capacity;
	int top;
	
	@SuppressWarnings("unchecked")
	public Stack(int capacity) {
		this.capacity=capacity;
		this.stack= (E[]) new Object[capacity];
		this.top=-1;
	}

	
	public void push(E o) throws StackOverflowException {
		if(top==capacity)
			throw new StackOverflowException("Overflow:Stack is full");
		else 
			stack[++top]=o;
	}
	
	public E top() {
		return stack[top];
	}


	public E pop() throws EmptyStackException{
		if(top==-1) {
			throw new EmptyStackException("Empty stack, cannot pop");
		}
		else
			return stack[top--];
	}


	public int size() {
		return (this.top)+1;
	}


	public boolean empty() {
		return top==-1;
	}
	

}
