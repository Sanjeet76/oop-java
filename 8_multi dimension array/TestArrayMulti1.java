/*Demonstration of multidimension array*/
import java.util.*;
class TestArrayMulti1
{
	public static void main(String args[])
	{
		int arr[][]=new int[20][30];
		int i,j,row,col;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter row size of array");
		row =sc.nextInt();
		System.out.println("Enter col size of array");
		col =sc.nextInt();
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				System.out.println("Enter value");
				arr[i][j]=sc.nextInt();
			}
		}
		System.out.println("values of array are ");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				System.out.print(arr[i][j]+"  ");
				
			}
			System.out.println();
		}
		
	}
}