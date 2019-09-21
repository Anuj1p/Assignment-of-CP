/*question number 2*/

#include<stdio.h>
void main()
{
int n,a,b=0,i;
printf("the value of n is");
scanf("%d",&n);
printf("enter the numbers%d",n);
for(i=1; i<=n; i++)
{
scanf("%d",&a);
b=b+((a/10)%10);
}
printf("%d",b);
}
