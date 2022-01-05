/*use of abstract keyword in java*/
import java.util.*;
abstract class ShapeAbstract
{
	int Side1,Side2;
	abstract void input();
	abstract void area();
	abstract void printarea();
}
class Rectangle1 extends ShapeAbstract
{
	int res;
	void input()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter two side of reactangle");
		Side1 =sc.nextInt();
		Side2 =sc.nextInt();
	}
	void area()
	{
		res =Side1*Side2;
	}
	void printarea()
	{
		System.out.println("Area of rectangle is"+res);
	}
}
class Triangle extends ShapeAbstract
{
	double res;
	void input()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter base and height of Triangle");
		Side1 =sc.nextInt();
		Side2 =sc.nextInt();
	}
	void area()
	{
		res =0.5 * Side1 * Side2;
	}
	void printarea()
	{
		System.out.println("Area of Triangle is"+res);
	}
}
class Square extends ShapeAbstract
{
	int res;
	void input()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter side of square");
		Side1 =sc.nextInt();
		
	}
	void area()
	{
		res = Side1 * Side1;
	}
	void printarea()
	{
		System.out.println("Are of square is"+res);
	}
}
class Demoabstractshape
{
	public static void main(String args[])
	{
		ShapeAbstract ob;//Referance of parent class
		ob=new Rectangle1();//upcasting
		ob.input();
		ob.area();
		ob.printarea();
		
		ob =new Triangle();//upcasting
		ob.input();
		ob.area();
		ob.printarea();
		
		ob =new Square();//upcasting
		ob.input();
		ob.area();
		ob.printarea();
	}
}
		