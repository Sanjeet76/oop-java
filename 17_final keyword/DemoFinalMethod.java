/*use of final method in java*/
class TestFinalMethod
{
	final void show()
	{
		System.out.println("Base class");
	}
}
class childFinal extends TestFinalMethod//Method overriding
{
	void show()
	{
		System.out.println("Derived class");
	}
}
class DemoFinalMethod
{
	public static void main(String args[])
	{
		childFinal ob = new childFinal();
		ob.show();
		ob.show();
	}
}