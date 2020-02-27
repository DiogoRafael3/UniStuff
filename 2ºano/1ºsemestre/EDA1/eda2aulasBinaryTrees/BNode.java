package eda2aulasBinaryTrees;

public class BNode<E> {
	E info;
	BNode<E> left;
	BNode<E> right;
	public BNode() {
		this.info=null;
		this.left=null;
		this.right=null;
	}
	
	public BNode(E x) {
		this.info=x;
		this.left=null;
		this.right=null;
	}
	
	public BNode(E x, BNode<E> test1, BNode<E> test2) {
		this.info=x;
		this.left=test1;
		this.right=test2;
	}

	public E info() {
		return info;
	}

	public void setInfo(E info) {
		this.info = info;
	}

	public BNode<E> getLeft() {
		return left;
	}

	public void setLeft(BNode<E> left) {
		this.left = left;
	}

	public BNode<E> getRight() {
		return right;
	}

	public void setRight(BNode<E> right) {
		this.right = right;
	}
	

}
