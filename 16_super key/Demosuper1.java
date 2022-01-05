/*use of super keyword in java*/
class one
{
	int no =10;
	one()
	{
		System.out.println("Default constructor of base class");
	}
	void display()
	{
		System.out.println("base class method");
	}
}
class two extends one
{
	int value=20;
	two()
	{
		System.out.println("Default constructor of Derived class");
	}
	void show()
	{
		System.out.println("base class variable ="+super.no);
		System.out.println("Derived class variable value ="+value);
		super.display();
	}
}
class Demosuper1
{
	public static void main(String args[])
	{
		two ob=new two();
		ob.show();
	}
}