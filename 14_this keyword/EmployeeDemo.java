/*use of this keyword in java*/
class EmployeeTest
{
	int empid;
	float salary;
	String name;
	EmployeeTest()
	{
		System.out.println("Default constructor");
	}
		
	EmployeeTest(int empid, float salary, String name)
	{
		this();
		this.empid =empid;
		this.salary =salary;
		this.name=name;
	}
	
	void display(String company)
	{
		System.out.println("i am working at "+company+" company");
	}
	void show()
	{
		
		System.out.println("name ="+name);
		System.out.println("Employee id ="+empid);
		System.out.println("salary ="+salary);
		this.display("company java");
	}
}
class EmployeeDemo
{
	public static void main(String args[])
	{
		EmployeeTest ob =new EmployeeTest(11,500.55f,"shree");
		System.out.println("\n values of first object");
		ob.show();
		EmployeeTest ob1 =new EmployeeTest(21,600.55f,"sanju");
		System.out.println("\nvalues of second object");
		ob1.show();
	}
}
		
		
		