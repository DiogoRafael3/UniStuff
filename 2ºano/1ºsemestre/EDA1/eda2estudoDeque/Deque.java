package eda2estudoDeque;

public interface Deque<E> {
	public void push(E o);
	public E pop();
	public void inject(E o);
	public E eject();
}
