/*use of final class in java*/
class TestFinalMethod11
{
	 void show1()
	{
		System.out.println("Base class");
	}
}
class childFinal11 extends TestFinalMethod11//Method overriding
{
	void show2()
	{
		System.out.println("Derived class");
	}
}
class DemoFinalMethod11
{
	public static void main(String args[])
	{
		childFinal11 ob = new childFinal11();
		ob.show1();
		ob.show2();
	}
}