/*use of abstract key*/
abstract class ABC
{
	ABC()
	{
		System.out.println("My smart home project");
	}
	
	void beautiful()
	{
		System.out.println("My home is beautiful");
	}
	abstract void movement();
	abstract void talk();
	abstract void disappear();
}
abstract class XYZ extends ABC
{
	void movement()
	{
		System.out.println("My home can move");
	}
	void talk()
	{
		System.out.println("My home can talk");
	}	
}
class PQR extends XYZ
{
	void disappear() 
	{
		System.out.println("My home can disappear");
	}
}
class DemoAbstract
{
	public static void main(String args[])
	{
		PQR ob =new PQR();
		ob.beautiful();
		ob.movement();
		ob.talk();
		ob.disappear();
	}
}

	