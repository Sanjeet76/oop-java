/*use of method overridding in java to avoid overridding of methods in inheritance*/
class Parentoverriding1
{
	void show()
	{
		System.out.println("Base class method");
	}
}
class childoverriding1 extends Parentoverriding1
{
	void show()
	{
		System.out.println("Derived1 class Method");
	}
}
class childoverriding2 extends childoverriding1
{
	void show()
	{
		System.out.println("Derived2 class Method");
	}
}
class Testoverriding1
{
	public static void main(String args[])
	{
		Parentoverriding1 ob;//Referance of parent class
		ob = new childoverriding1();
		ob.show();
		ob =new Parentoverriding1();
		ob.show();
		ob = new childoverriding2();
		ob.show();
	}
}