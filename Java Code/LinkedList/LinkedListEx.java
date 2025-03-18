
class Node { 
 	int data; 
 	Node next=null; 
 	Node(int data){ 
 		this.data=data; 
 	} 
 } 
public class LinkedListEx {

	static Node head; 
	 public static void display_linked_list(Node head) { 
	 	Node temp=head; 
	 	while(temp !=null) { 
	 		System.out.print(temp.data+" -> "); 
	 		temp=temp.next; 
	 		 
	 	} 
	 	System.out.print("null"); 
	 } 
	 public static void insert_after(Node head, int data, int after) { 
		 Node temp = head; 
		 Node new_node = new Node(data); 
		 while(temp!= null && temp.data!=after) { 
			 temp = temp.next; 
		 } 
		 new_node.next = temp.next; 
		 temp.next = new_node; 
	 } 
		 public static void search_ele(Node head, int se) {
			 System.out.println(se+ " is found at index pos 0"); 
					System.out.println(se+ "is not found"); 
		 }
	 	public static void main(String[] args) { 
	 	Node n1=new Node(10); 
	 	Node n2=new Node(20); 
	 	Node n3=new Node(30); 
	 	Node n4=new Node(40); 
	 	Node n5=new Node(50); 
	 	head=n1; 
	 	n1.next=n2; 
	 	n2.next=n3; 
	 	n3.next=n4; 
	 	n4.next=n5; 
	 	display_linked_list(head); 
	 	insert_after(head, 35,30);
	 	System.out.println(); 
	 	display_linked_list(head); 
	 	insert_after(head, 49, 20); 
	 	System.out.println(); 
	 	display_linked_list(head);
	 	search_ele(head, 30); 
	 	System.out.println(); 
	 	 
	 	} 
	  
	 }
