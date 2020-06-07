// Testcase to check scope of a variable
/*bshfbsj*/

#include <stdio.h>
void main()
{
    int a = 10, b = 5;

    {
    	{
        scanf("%d",&b);
    	}
    }
}