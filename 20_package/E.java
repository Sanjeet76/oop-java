/*use of package in java for outside of package*/
package folder2;
import folder1.*;
class E extends A
{
	public static void main(String args[])
	{
		E ob = new E();
		ob.show();
	}
}