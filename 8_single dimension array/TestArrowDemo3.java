/*Demonstration of  concept for:each single dimension array*/
class TestArrowDemo3
{
	public static void main (String args[])
	{
		int arr[]={10,20,30,40,50};
		System.out.println("values are");
		for(int index:arr)
		{
			System.out.println(index);
		}
	}
}