/*demonstration  of class and object*/
import java.util.*;
class student
{
	//properties setting for class
	String name;
	int age;
	float mark;
	//seting action
	void get()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter name");
		name=sc.next();
		System.out.println("Enter age");
		age=sc.nextInt();
		System.out.println("Enter mark");
		mark=sc.nextFloat();
	}
	void show()
	{
		System.out.println("Details of student");
		System.out.println("Name ="+name);
		System.out.println("Age ="+age);
		System.out.println("Mark ="+mark);
	}
}
		
class DemoClass
{
	public static void main(String args[])
	{
		student ob = new student();
		ob.get();
		ob.show();
		student ob1 = new student();
		ob1.get();
		ob1.show();
	}
}