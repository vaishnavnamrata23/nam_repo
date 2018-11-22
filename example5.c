#include<stdio.h>
void main ()
{
int a=-3;
a = - a - a + !a ;
printf("%d\n",a);
/*expression will be evaluated as:- -(-3)-(-3)+!(-3)
therefore 3+3+!(-3)=6+0
!(-3) will be zero if we write 0 ten it will be 1 and if we write 1 then it will be 0 and except 0 and 1 it will be 0 */
}
