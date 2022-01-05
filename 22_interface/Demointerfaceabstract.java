/*use of interface in java*/
interface  ABC1
{
	int no1=20;//public static final
	void movement();//default access modifier is public
	void talk();
	void disappear();//default is abstract
	void beautiful();
}
abstract class XYZ1 implements ABC1
{
	public void movement()
	{
		//no1++ cannot modified the value as it final
		System.out.println("value of no1 ="+no1);
		System.out.println("MY home can move");
	}
	public void talk()
	{
		System.out.println("My home can talk");
	}
	public void disappear()
	{
		System.out.println("MY home can talk");
	}
	
}
class PQR1 extends XYZ1
{
	public void beautiful()
	{
		System.out.println("My home is beautiful");
	}
}
class Demointerfaceabstract
{
	public static void main(String args[])
	{
		PQR1 ob=new PQR1();
		ob.beautiful();
		ob.movement();
		ob.talk();
		ob.disappear();
	}
}