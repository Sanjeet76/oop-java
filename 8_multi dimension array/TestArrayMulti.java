/*Demonstration of multidimension array*/
class TestArrayMulti
{
	public static void main(String args[])
	{
		int arr[][];
		arr = new int[2][3];
		arr[0][2]=20;
		arr[1][1]=50;
		int i,j;
		System.out.println("values of array are ");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}