/*USe of Hirarchical inheritance in java*/
import java.util.*;
class parent31
{
	int no1;
	void get()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the first value");
		no1 =sc.nextInt();
	}
}
class child41 extends parent31
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
class child51 extends child31
{
	int no3,res;
	void get3()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the third value");
		no3 =sc.nextInt();
	}
	void addition()
	{
		res =no1+no3;
	}
	void show()
	{
		System.out.println("Addition of " +no1+ " and " +no3+ " is " +res);
	}
}
	
class DemoHierarchiInheritance
{
	public static void main(String args[])
	{
		System.out.println("operation of first object");
		child41 ob =new child41();
		ob.get();
		ob.input();
		ob.addition();
		ob.show();
		
		System.out.println("operation of second object");
		child51 ob1 =new child51();
		ob1.get();
		ob1.get3();
		ob1.addition();
		ob1.show();
	}
}