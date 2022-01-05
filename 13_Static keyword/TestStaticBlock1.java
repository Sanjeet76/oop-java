/*use of static block in java*/
class TestStaticBlock1
{
	static
	{
		System.out.println("First static block");
	}
	//non-static block
	{
		System.out.println("First non- static block");
	}
	TestStaticBlock1()
	{
		System.out.println("Default constructor is called");
	}
	
	public static void main(String args[])
	{
		System.out.println("Inside main method");
		TestStaticBlock1 ob =new TestStaticBlock1();
	}
	
}
