/*use of exception handling mechanism in java*/
import java.util.*;
class TestExceptionhandling
{
	public static void main(String args[])
	{
		try
		{
		int no1,no2,res;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter first value");
		no1=sc.nextInt();
		System.out.println("Enter second value");
		no2=sc.nextInt();
		res=no1/no2;
		System.out.println("Result is"+res);
		}
		catch(ArithmeticException ob)
		{
			System.out.println("cannot divide by zero");
		}
		System.out.println("program over");
	}
}
		