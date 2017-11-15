public class BinaryTree{

	public static TreeNode root;

	BinaryTree(){
		root=null;
	}

	public static boolean isEmpty(TreeNode node){

		//System.out.println("node: " + node);
		if(node == null)
			return true;
		else
			return false;
	}

	public static void insert(int value){

		TreeNode temp=root;//con temp vamos a recorrer nodo a nodo
		if(isEmpty(temp)){
			root=new TreeNode(value);
			return;
		}

		while(!isEmpty(temp)){//nodo actual
			if(value > temp.data){//sub arbol derecho valores mas grandes
				if(isEmpty(temp.right)){
					TreeNode t= new TreeNode(value);
					temp.right=t;
					return;	
				}else{
					temp=temp.right;
					continue;
				}
			}else{//sub arbol izquierdo valores mas chicos
				if(isEmpty(temp.left)){
					TreeNode t= new TreeNode(value);
					temp.left=t;	
				}else{
					temp=temp.left;
					continue;
				}
			}
		}
	}

	public static void print_inorder(){

		if(root == null)
			System.out.println("ARBOL VACIO (NI LA RAIZ)");
		inorder(root);
		System.out.println();
	}

	public static void inorder(TreeNode root){

		TreeNode temp=root;
		if(!isEmpty(temp)){//al menos tiene un nodo
			inorder(temp.left);
			System.out.print(temp.data + ",");
			inorder(temp.right);
		}
	}

	public static void print_preorder(){

		if(root == null)
			System.out.println("ARBOL VACIO (NI LA RAIZ)");
		preorder(root);
		System.out.println();
	}

	public static void preorder(TreeNode root){

		TreeNode temp=root;
		if(!isEmpty(temp)){//al menos tiene un nodo
			System.out.print(temp.data + ",");
			preorder(temp.left);
			preorder(temp.right);
		}
	}

	public static void print_postorder(){

		if(root == null)
			System.out.println("ARBOL VACIO (NI LA RAIZ)");
		postorder(root);
		System.out.println();
	}

	public static void postorder(TreeNode root){

		TreeNode temp=root;
		if(!isEmpty(temp)){//al menos tiene un nodo
			postorder(temp.left);
			postorder(temp.right);
			System.out.print(temp.data + ",");
		}
	}

	public static void main(String args[]){

		BinaryTree bst= new BinaryTree();//crea una referencia a root nula
		insert(1);
		insert(3);
		insert(2);
		//insert(4);
		//insert(5);
		System.out.println("INORDER:");
		print_inorder();
		System.out.println("PREORDER:");
		print_preorder();
		System.out.println("POSTORDER:");
		print_postorder();
	}
}