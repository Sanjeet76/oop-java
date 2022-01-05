/*use of superkeyword multi inheritance and constractor*/
class Baseone1
{
	int no1;
	Baseone1(int value)
	{
		no1 = value;
	}
}
class childone1 extends Baseone1
{
	int no2;
	childone1(int num1, int num3)
	{
		super(num1);
		no2=num3;
	}
	
}
class childone2 extends childone1
{
	int no3;
	childone2(int num1,int num2,int num3)
	{
		super(num1,num3);
		no3=num2;
	}
	void display()
	{
		System.out.println("Base class variable value ="+no1);
		System.out.println("intermediate class variable value ="+no2);
		System.out.println("child class variable value ="+no3);
	}
}
class Demoone11
{
	public static void main(String args[])
	{
		childone2 ob =new childone2(10,20,30);
		ob.display();
	}
}
		