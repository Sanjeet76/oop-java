/*USe of single inheritance in java*/
import java.util.*;
class parent11
{
	int no1;
	void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first value");
		no1 =sc.nextInt();
	}
}
class child11 extends parent11
{
	int no2,res;
	void input()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the second value");
		no2 =sc.nextInt();
	}
	void addition()
	{
		res =no1+no2;
	}
	void show()
	{
		System.out.println("Addition of " +no1+ " and " +no2+ " is " +res);
	}
}
class DemoSingleInheritance
{
	public static void main(String args[])
	{
		child11 ob =new child11();
		ob.get();
		ob.input();
		ob.addition();
		ob.show();
	}
}