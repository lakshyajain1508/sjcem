
public class StackEx {
	
	private int size;
	private int[] arr;
	private int top;
	
	public StackEx(int size) {
		this.size = size;
		this.top = -1;
		arr = new int[size];
	}
	
	public void push(int data) {
		if(isFull() == false) {
			this.top++;
			arr[this.top] = data;
			System.out.println("Pushed : "+data);
		}else {
			System.out.println("Stack is overflow "+data+" cannot be pushed ...");
		}
	}
	
	public boolean isFull(){
		return top == size-1;
	}
	
	public void pop() {
		if(isEmpty() == false) {
			System.out.println("Popped : "+arr[top]);
			top--;
		}else {
			System.out.println("Stack is underflow ...");
		}
	}
	public boolean isEmpty() {
		return top == -1;
	}

	public static void main(String[] args) {
		
		StackEx stack = new StackEx(5);
		stack.push(10);
		stack.push(20);
		stack.push(30);
		stack.push(40);
		stack.push(50);
		stack.push(60);
		stack.pop();
		stack.pop();
		stack.pop();
		stack.pop();
		stack.pop();
		stack.pop();
		
		
		
		
	}

}
