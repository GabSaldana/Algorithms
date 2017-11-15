public class Node{

	private int data;
	private Node next;

	public Node(){//default constructor

		data=0;
		next=null;
	}

	public void showData(Node n){

		System.out.println("value: " + n.data);
	}

	public static void main(String args[]){

		Node node= new Node();
		node.data=10;
		showData(node);

	}

}