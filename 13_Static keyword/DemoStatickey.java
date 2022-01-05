/*use of static keyword*/
class TestStatickey
{
	int number =20;//instance variable
	static int value =30;//static variable
	static void display()//stat method
	{
		System.out.println("Inside static method");
		System.out.println("static  variable value is "+value);
	}
	void show()//non-static method
	{
		System.out.println("Inside non-static method");
		System.out.println("Instance variable value is "+number);
		System.out.println("static  variable value is "+value);
	}
}
class DemoStatickey
{
	public static void main(String args[])
	{
		TestStatickey ob =new TestStatickey();
		ob.show();//object is must to call non-static method
		TestStatickey.display();//object is not required to call static method
	}
}