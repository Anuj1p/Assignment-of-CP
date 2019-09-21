/*question number 11*/

#include<stdio.h>
void main()
{	
int x,d,y,a,b,c,z;
for(x=0; x<100; x++)
{
y=x/10;
b=y%10;
c=x%10;
d=b+c;
if(d%7==0)
	printf("\n%d",x);
}


}
