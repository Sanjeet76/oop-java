/*use of throw keyword in java*/
import java.util.*;
class TestExceptionHandlingthrow
{
	public static void main(String args[])
	{
		try
		{
			int no1,no2,res;
			Scanner sc =new Scanner(System.in);
			System.out.println("Enter the first value");
			no1=sc.nextInt();
			System.out.println("Enter the second  value");
			no2=sc.nextInt();
			if(no2==0)
			{
				throw new ArithmeticException();//exception is thrown manually by the user
			}
			else
			{
			res=no1/no2;
			System.out.println("Result is"+res);
			}
		}
		catch(ArithmeticException ob)
		{
			System.out.println("cannot divide by zero");
			System.out.println(ob);
		}
		System.out.println("program over");
		System.out.println("hello i am outside of block");
	}
}
			