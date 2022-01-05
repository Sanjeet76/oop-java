/*Demonstration of intialization of variable*/
import java.util.*;
class student
{
	int roll;
	float mark;
	student()
	{
		roll =10;
		mark=25.5f;
	}
	student(int roll1 , float mark1)
	{
		roll=roll1;
		mark=mark1;
	}
	
	void show()
	{
		System.out.println("Roll number"+roll);
		System.out.println("Mark"+mark);
	}
}
class DemoStudent
{
	public static void main(String args[])
	{
		student ob = new student();
		System.out.println("values of default constructor");
		ob.show();
		student ob1 = new student(20, 35.58f);
		System.out.println("values of Parameterized constructor");
		ob1.show();
	}
}
