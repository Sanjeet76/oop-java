/*use of interface in java*/
interface  ABC
{
	int no1=20;//public static final
	void movement();//default access modifier is public
	void talk();
	void disappear();//default is abstract
	void beautiful();
}
class XYZ implements ABC
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
	public void beautiful()
	{
		System.out.println("My home is beautiful");
	}
}
class Demointerface
{
	public static void main(String args[])
	{
		XYZ ob=new XYZ();
		ob.beautiful();
		ob.movement();
		ob.talk();
		ob.disappear();
	}
}