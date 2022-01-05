/*use of method overridding in java to avoid overridding of methods in inheritance*/
class Parentoverriding
{
	void show()
	{
		System.out.println("Base class method");
	}
}
class childoverriding extends Parentoverriding
{
	void show()
	{
		System.out.println("Derived class Method");
	}
}
class Testoverriding
{
	public static void main(String args[])
	{
		Parentoverriding ob;//Referance of parent class
		ob = new childoverriding();
		ob.show();
		ob =new Parentoverriding();
		ob.show();
	}
}