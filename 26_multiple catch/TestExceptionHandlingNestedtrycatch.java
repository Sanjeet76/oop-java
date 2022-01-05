/*use of nested try catch blocks  in java*/
import java.util.*;
class TestExceptionHandlingNestedtrycatch
{
	public static void main(String args[])
	{
		try//outer try block
		{
			int no1,no2,res;
			Scanner sc =new Scanner (System.in);
			System.out.println("Enter first value");
			no1=sc.nextInt();
			System.out.println("Enter second value");
			no2=sc.nextInt();
			res=no1/no2;
			System.out.println("Result"+res);
			System.out.println("Hello i am inside the try block");
			try//inner try block
			{
			String str ="shree";
			System.out.println("length of string is "+str.length());
			int arr[] ={1,3,5};
			System.out.println("The value of array is"+arr[5]);
			}
			catch(NullPointerException ob)//inner catch block
			{
				System.out.println("cannot dived by zero");
				System.out.println(ob);
			}
			
		}
		catch(ArithmeticException ob)//inner catch block
			{
				System.out.println("cannot dived by zero");
				System.out.println(ob);
			}
		catch(NumberFormatException ob)//outer try block
		{
			System.out.println("cannot dived by zero");
			System.out.println(ob);
		}
		catch(Exception ob)
		{
			System.out.println("Generic catch block");
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