/*Demonstration of jagged array*/
class TestArrayJagged
{
	public static void main(String args[])
	{
		int arr[][]=new int[3][];
		arr[0] = new int[2];
		arr[1] = new int[3];
		arr[2] = new int[5];
		int i,j,count=0;
		for(i=0;i<arr.length;i++)
		{
			for(j=0;j<arr[i].length;j++)
			{
				arr[i][j] =count;
				count++;
			}
		}
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