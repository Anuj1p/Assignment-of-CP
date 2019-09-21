/*question number 13*/

#include<stdio.h>
void main()
{
int x,y,z;
for(x=0; x<9; x++)
if((10*x)%3==1)
for(y=0; y<=9; y++)
{	
z=((10*x)+y);
printf("%d\n",z);
}








}
