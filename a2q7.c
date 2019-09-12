/*question no. 7*/
#include<stdio.h>
#include<math.h>
void main()
{
float x,y,a,b,c,p,q,r;
printf("enter the vlues of a,b,c,p,q,r");
scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);

x=(b*r-c*q)/(a*q-p*b);
printf("the value of x is%f",x);
y = -(p*x+r)/q;
printf("the value of y is%f",y);






}
