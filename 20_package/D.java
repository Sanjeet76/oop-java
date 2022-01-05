/*use of package in java for outside of package*/
package folder2;
import folder1.*;
class D
{
	public static void main(String args[])
	{
		A ob = new A();
		ob.show();
	}
}