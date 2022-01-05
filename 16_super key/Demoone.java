/*use of superkeyword inheritance and constractor*/
class Baseone
{
	int no1;
	Baseone(int value)
	{
		no1 = value;
	}
}
class childone extends Baseone
{
	int no2;
	childone(int num1, int num2)
	{
		super(num1);
		no2=num2;
	}
	void display()
	{
		System.out.println("Base class variable value ="+no1);
		System.out.println("Derived class variable value ="+no2);
	}
}
class Demoone
{
	public static void main(String args[])
	{
		childone ob =new childone(10,20);
		ob.display();
	}
}
		