/*use of re-throw in java*/
class TestRethrow
{
	void method1()
	{
		try
		{
			String str ="shree";
			char ch =str.charAt(6);
		}
		catch(StringIndexOutOfBoundsException ob)
		{
			System.out.println("First catch block");
			throw ob;//Re-throwing of exception
		}
	}
}
class DemoRethrow
{
	public static void main(String args[])
	{
		TestRethrow ob =new TestRethrow();
		try
		{
			ob.method1();
		}
		catch(StringIndexOutOfBoundsException ob1)
		{
			System.out.println("Second catch block");
			System.out.println(ob1);
		}
		System.out.println("program over");
	}
}
		