class TestExceptionPropagation
{
	void fun1()
	{
		int data =25/0;
	}
	void fun2()
	{
		fun1();
	}
	void fun3()
	{
		try
		{
			fun2();
		}
		catch(Exception ob)
		{
			System.out.println("Exception is handled");
		}
	}
	public static void main(String args[])
	{
		TestExceptionPropagation obj=new TestExceptionPropagation();
		obj.fun3();
		System.out.println("program over");
	}
}
		