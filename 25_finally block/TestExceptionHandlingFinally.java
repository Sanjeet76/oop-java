/*use of finally block  in java*/
import java.util.*;
class TestExceptionHandlingFinally
{
	public static void main(String args[])
	{
		try
		{
			int no1,no2,res;
			Scanner sc =new Scanner (System.in);
			System.out.println("Enter first value");
			no1=sc.nextInt();
			System.out.println("Enter second value");
			no2=sc.nextInt();
			res=no1/no2;
			System.out.println("Result"+res);
		}
		catch(ArithmeticException ob)
		{
			System.out.println("cannot dived by zero");
			System.out.println(ob);
		}
		finally 
		{
			System.out.println("Finally Block");
		}
		System.out.println("program over");
		System.out.println("hello i am outside the try block");
	}
}