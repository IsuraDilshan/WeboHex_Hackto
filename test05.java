class Example{
	public static void main(String args[]){
		char number;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter number : ");
		number = input.nextChar();
		
		switch (number){
			case 1 : System.out.println("A");break;
			case 2 : System.out.println("B");break;
			case 3 : System.out.println("C");break;
			case 4 : System.out.println("D");break;
			case 5 : System.out.println("E");break;
			default : System.out.println("Try Again");
		}
		
	}
}
