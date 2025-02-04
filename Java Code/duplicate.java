

public class duplicate {

	public static void main(String[] args) {
		int [] b = {1,3,5,6,1,4,3,5};
		for(int i = 0; i < b.length; i++) {
			int a = b[i];
			for(int j=i+1;j<b.length;j++) {
				int c = b[j];
			
				if(a == c) {
					System.out.println(a);
				}
			}
		}

	}

}
