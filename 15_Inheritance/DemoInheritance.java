/*use of inheritance in java*/
class parent
{
	void show()
	{
		System.out.println("Base class method");
	}
}
class child extends parent
{
	void display()
	{
		System.out.println("Derived class Method");
	}
}
class DemoInheritance
{
	public static void main(String args[])
	{
		child ob = new child();
		ob.display();
		ob.show();
	}
}