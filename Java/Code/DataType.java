ublic class DataType {

	public static void main(String[] args) {
		
		// byte,short,int,float,long,double,char,boolean
		
		short a = 10;
		System.out.println("Variable value is "+ a);
		
		boolean value = true;
		System.out.println("Variable value is "+ value +".");
		
		System.out.println("===========================");
		System.out.println("----------Short Data Type---------");
		System.out.println("Short has "+ Short.BYTES+" Bytes size");
		System.out.println("Min value is "+ Short.MIN_VALUE);
		System.out.println("Max value is "+ Short.MAX_VALUE);
		
		System.out.println("----------Integer Data Type---------");
		System.out.println("Int has "+ Integer.BYTES+" Bytes size");
		System.out.println("Min value is "+ Integer.MIN_VALUE);
		System.out.println("Max value is "+ Integer.MAX_VALUE);
		
		System.out.println("----------Float Data Type---------");
		System.out.println("Float has "+ Float.BYTES+" Bytes size");
		System.out.println("Min value is "+ Float.MIN_VALUE);
		System.out.println("Max value is "+ Float.MAX_VALUE);
		
		// As we do for all data types.
		
	}

}
