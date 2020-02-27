package eda2aulasQueues;

public class Queue<E> implements QueueInterface<E>{
	int capacity;
	private E[] queue;
	int size,front, rear;
	
	@SuppressWarnings("unchecked")
	public Queue(int capacity) {
		this.capacity=capacity;
		this.queue= (E[]) new Object[capacity];
		this.size=0;
		this.front=0;
		this.rear=0;
	}

	
	public void enqueue(E o) throws OverflowQueueException{
		if(size==capacity)
			throw new OverflowQueueException("Overflow: queue size exceeded");
		else {
			size++;
			queue[rear]=(E) o;
			rear= (rear+1) % capacity;
		}
	}
	
	public E front() throws EmptyQueueException{
		if (size==0)
			throw new EmptyQueueException("Queue is empty, cannot dequeue");
		else
			return queue[front];
	}
	
	public E dequeue() throws EmptyQueueException{
		if (size==0)
			throw new EmptyQueueException("Queue is empty");
		else {
			size--;
			E tempdata=queue[front%capacity];
			queue[front]=null;
			front=(front+1)%capacity;
			return tempdata;
		}
	}
	
	public int size() {
		return size;
	}
	
	public boolean empty() {
		return size==0;
	}

}
