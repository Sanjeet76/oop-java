import java.util.*;
class TestArrayMulti2
{
	public static void main(String args[])
	{
		int arr[][]={{1,2,3},{4,5,6}};
		int i,j;
		System.out.println("values of array are");
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
	}
}
		