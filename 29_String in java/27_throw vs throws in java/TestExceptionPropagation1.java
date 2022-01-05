import java.io.*;
class TestExceptionPropagation1
{
	void fun1() throws IOException
	{
		throw new IOException();
	}
	void fun2()throws IOException
	{
		fun1();
	}
	void fun3() throws IOException
	{
		fun2();
	}
	public static void main(String args[])
	{
		TestExceptionPropagation1 obj=new TestExceptionPropagation1();
		try{
			obj.fun3();
		}
		catch(Exception ob)
		{
			System.out.println("Exception is handled");
		}
	System.out.println("program over");
		
	}
}
		