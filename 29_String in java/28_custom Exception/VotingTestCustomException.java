import java.util.*;
class MyException extends Exception
{
	String str;
	MyException(String st)
	{
		str=st;
	}
	public String toString()
	{
		return("As agebis <18  so cannot vote."+str);
	}
}
public class VotingTestCustomException
{
	static void validate(int age) throws MyException
	{
		if(age<18)
		{
			throw new MyException ("Invalid");
		}
		else
		{
			System.out.println("Welcome to vote");
		}
	}
	public static void main(String args[])
	{
		try
		{
			int age;
			Scanner sc =new Scanner(System.in);
			System.out.println("Enter your age");
			age=sc.nextInt();
			validate(age);
		}
		catch(MyException ob)
		{
			System.out.println("Exception occured"+ob);
		}
		finally
		{
			System.out.println("Thank you for your effort");
		}
	}
}