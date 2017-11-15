import java.util.*;

public class Node{

	private int data;
	private Node next=null;
	public static Node head;

	public Node(int d){//default constructor
		data=d;
	}

	public static void showData(Node node){

		System.out.println("value: " + node.data);
		System.out.println("next: " + node.next);
	}

	public static void printList(){

		Node temp=head;
		if(temp == null) System.out.println("Lista vacia");
		while(temp != null){

			//System.out.println("temp data: " + temp.data);
			showData(temp);
			temp=temp.next;//como vamos avanzando: almacenando en temp temporalmente la copia del siguiente nodo
			
		}
		System.out.println("");
	}

	public static Node insertFirst(int value){

		Node temp=head;
		Node newi = new Node(value);
		head=newi;
		newi.next=temp;
		return head;
	}

	public static Node insertLast( int value){

		Node newi = new Node(value);
		Node temp=head;
		while(temp.next != null){
			temp= temp.next;
		}
		temp.next=newi;
		return head;
		//newi.next=temp.next;
		//temp.next=newi;
	}

	public static Node remove( int value){

		Node temp=head;
		if(temp.data == value){
			return temp.next;
		}else{
			while(temp.next != null){
				if(temp.next.data == value){
					if(temp.next.next == null){//ultima posicion
						temp.next=null;
						break;
					}else{
						temp.next=temp.next.next;
					}
				}
				temp=temp.next;
			}
		}
		return head;
	}

	/*public static int count(){

		int count=0;
		Node temp=head;
		while(temp.next != null){
			count++;
		}
		return count;
	}*/

	public static Node deletDup(){

		Node temp=head,prev=null;
		Map<Integer,Boolean> map=new HashMap<Integer,Boolean>();
		if(temp.next == null){
			System.out.println("List with one elemet");
		}else if(temp == null){
			System.out.println("Empty list");
		}else{
			while(temp != null){
				//System.out.println("key:" + temp.next.data + "r=" + map.containsKey(temp.next.data));
				if(map.containsKey(temp.data)){
					if(temp.next == null){
						prev.next=null;break;
					}
					prev.next=temp.next;
					temp=temp.next;
				}else{
					map.put(temp.data,true);
					prev=temp;
					temp=temp.next;
				}
			}
		}
		
		return head;
	}

	public static void main(String args[]){

		head= new Node(1);
		head=insertLast(2);
		head=insertLast(3);
		head=insertLast(4);
		head=insertLast(6);
		printList();
		//int c=count();
		//head=deletDup();
		head=remove(4);
		printList();
	}

}