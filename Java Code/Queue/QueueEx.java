
import java.util.LinkedList; 
import java.util.Queue;
public class QueueEx {

	public static void main(String[] args) {
		
		Queue<Integer> q = new LinkedList<>(); 
		q.add(1); 
		q.add(3); 
		q.add(5); 
		q.add(9); 
		System.out.println(q); 
		int n1=q.remove(); 
		System.out.println("After Removing: " + n1); 
		int n2=q.peek(); 
		System.out.println("After Peek: " + n2); 
		int n3=q.size(); 
		System.out.println("size: " + n3); 
		int n4=q.poll(); 
		System.out.println("Poll: " + n4); 
		int n5 =q.remove(); 
		System.out.println("After Removing: " + n5); 
		
	}

}
