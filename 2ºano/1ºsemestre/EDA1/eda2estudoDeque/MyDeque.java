package eda2estudoDeque;

public class MyDeque<E> implements Deque<E> {
	Stack<E> tstack;
	Stack<E> deque;
	int capacity;
	
	
	public MyDeque(int capacity) {
		this.capacity=capacity;
		this.tstack= new Stack<>(capacity);
		this.deque= new Stack<>(capacity);
	}
	@Override
	public void push(E o)  {
		try {
			deque.push(o);
		} catch (StackOverflowException e) {
			e.printStackTrace();
		}
		
	}

	@Override
	public E pop() {
		try {
			return deque.pop();
		} catch (EmptyStackException e) {
			e.printStackTrace();
		}
		return null;
	}

	@Override
	public void inject(E o) {
		try {
		while(!deque.empty()) {
				tstack.push(deque.pop());
		}
		tstack.push(o);
		while(!tstack.empty()) {
				deque.push(tstack.pop());
		}
		} catch (StackOverflowException | EmptyStackException e) {
			e.printStackTrace();
		}
		
	}

	@Override
	public E eject() {
		try {
		while(!deque.empty()) {
				tstack.push(deque.pop());
		}
			E x = tstack.pop();

			while(!tstack.empty()) {
					deque.push(tstack.pop());
			}
			return x;
		} catch (StackOverflowException | EmptyStackException e) {
			e.printStackTrace();
		}
		return null;
	}
	
	public E DequeFront() {
		return deque.top();
	}
	
	public E DequeRear() {
		try {
		while(!deque.empty()) {
			tstack.push(deque.pop());
		}
		E temp= tstack.top();

		while(!tstack.empty()) {
				deque.push(tstack.pop());
		}
		return temp;
		} catch (StackOverflowException | EmptyStackException e) {
			e.printStackTrace();
		}
		return null;
	}
	
	
	
}
