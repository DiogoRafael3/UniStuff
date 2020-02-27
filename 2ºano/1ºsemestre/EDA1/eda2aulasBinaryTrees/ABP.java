package eda2aulasBinaryTrees;

public class ABP<E extends Comparable<? super E>> implements ABPInterface<E>, Iterable<E>{
	BNode<E> root;

	public ABP() {
		root= null;
	}
	public ABP(E info) {
		root= new BNode<E>(info);
	}
	public ABP(BNode<E> root) {
		this.root= root;
	}
	public ABP(E info, BNode<E> left, BNode<E> right) {
		root= new BNode<E>(info, left, right);
	}
	
	public java.util.Iterator<E> iterator(){ 
		return new ABPIterator<E>(root); 
	}
	
	public void printPreOrdem() {
		preorder(root);
		System.out.println();
	}
	
	public void printPosOrdem() {
		postorder(root);
		System.out.println();
	}
	
	public void printEmOrdem() {
		inorder(root);
		System.out.println();
	}
	
	public void preorder(BNode<E> node) {
		if(node!=null) {
			System.out.print(node.info() + " ");
			preorder(node.getLeft());
			preorder(node.getRight());
		}
	}

	public void postorder(BNode<E> node) {
		if(node!=null) {
			postorder(node.getLeft());
			postorder(node.getRight());
			System.out.print(node.info() + " ");
		}
	}

	public void inorder(BNode<E> node) {
		if(node!=null) {
			inorder(node.getLeft());
			System.out.print(node.info() + " ");
			inorder(node.getRight());
		}
	}
	
	
	@Override
	public boolean isEmpty() {
		if(root==null) {
			return true;
		}
		return false;
	}
	
	
	@Override
	public boolean contains(E x) {
		return contains(x, root);
	}
	
	public boolean contains(E x, BNode<E> node) {
		if (node==null)
			return false;
		else{
			if (node.info.compareTo(x)<0)
				return contains(x,node.right);
		else if (node.info.compareTo(x)>0)
			return contains(x,node.left);
		else
			return true;
		}
		
	}
	
	//findMin
	
	
	@Override
	public E findMin() {
		if(isEmpty())
			return null;
		return findMin(root);
	}
	private E findMin(BNode<E> root2) {
		if (root2.left==null)
			return root2.info;
		else
			return findMin(root2.left);
	}
	
	//findMax
	
	
	@Override
	public E findMax() {
		if(isEmpty())
			return null;
		return findMax(root);
	}
	private E findMax(BNode<E> root2) {
		if (root2.right==null)
			return root2.info;
		else
			return findMin(root2.right);
	}
	
	
	@Override
	public void insere(E x) {
		root=insere(x,root);
	}
	
	public BNode<E> insere(E x, BNode<E> node) {
		if (node==null)
			node= new BNode<E>(x, null, null);
		else if ((node.info).compareTo(x)>0)
			node.left=insere(x, node.left);
		else if ((node.info).compareTo(x)<0)
			node.right=insere(x, node.right);
		return node;
	}
	
	
	@Override
	public void remove(E x) {
		root= remove(x,root);
	}
	private BNode<E> remove(E x, BNode<E> node) {
		if (node==null) 
			return node; 
		if (node.info.compareTo(x)<0)         
			node.right=remove(x,node.right); 
		else if(node.info.compareTo(x)>0)         
			node.left=remove(x,node.left); 
		else if (node.left!=null && node.right!=null){ 
			E min = findMin(node.right);         
			node.info= min;         
			node.left=remove(min,node.right);     
			} 
		else if (node.left==null)         
			node=node.right; 
		else node=node.left; 
		return node; 
	}
}
