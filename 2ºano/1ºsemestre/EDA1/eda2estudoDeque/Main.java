package eda2estudoDeque;

public class Main {
	public static void main(String[] args) {
		MyDeque<Integer> deque= new MyDeque<>(10);
		deque.push(1);
		deque.push(2);
		deque.inject(4);
		deque.eject();
		System.out.println(deque.DequeFront());
		System.out.println(deque.DequeRear());
	}
}
