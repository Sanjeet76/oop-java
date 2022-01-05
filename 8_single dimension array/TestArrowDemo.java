class TestArrowDemo
{
	public static void main (String args[])
	{
		int arr[];//Declaration of array
		arr =new int[5];//instantiation
		arr[3]=30;
		arr[1]=50;//initializtion
		int index;
		System.out.println("values of array are");
		for(index=0;index<5;index++)
		{
			System.out.print(arr[index]+"  ");
		}
	}
}