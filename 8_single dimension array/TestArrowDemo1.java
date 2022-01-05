import java.util.*;
class TestArrowDemo1
{
	public static void main (String args[])
	{
		int arr[] =new int[50];
		int size;
		int index;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the size of array");
		size = sc.nextInt();//input from user
		for(index=0;index<size;index++)
		{
			System.out.println("Enter value");
			arr[index]=sc.nextInt();
		}
		System.out.println("values of array are");
		for(index=0;index<size;index++)
		{
			System.out.print(arr[index]+"  ");
		}
	}
}