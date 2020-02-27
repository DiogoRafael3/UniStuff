package eda2aulasBinaryTrees;

import eda2aulasStacks.*;

public class ABPIterator<E> implements java.util.Iterator<E>{
	BNode<E> root;
	Stack<BNode<E>> choice_points;
	public ABPIterator(BNode<E> root){
		this.root=root; 
		choice_points=new Stack<BNode<E>>(200); 
	}
	
	public boolean hasNext(){ 
		return root!=null; 
	}
	
	public void remove( ){ 
		throw new  UnsupportedOperationException(); 
	}
	
	public E next(){ 
		if( !hasNext() ) 
			throw new java.util.NoSuchElementException( ); 
		E to_return=root.info;
		if (root.getRight()!=null){ 
			try {
				choice_points.push(root.getRight());
			} catch (StackOverflowException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			}
		if(root.getLeft()!=null){ 
			root=root.getLeft();     
			} else{ 
				if(!choice_points.empty()){ 
					try {
						root=choice_points.pop();
					} catch (EmptyStackException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}         
					} 
				else 
					root=null;
		} return to_return;
		}
	}
