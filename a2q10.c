/*question number 10*/
/*length of chord of circle of centre h,k
 * a line x=s cut the circle*/
 
#include<stdio.h>
#include<math.h>
void main()
{
float h,k,r,s,d,x,y;
printf("the value of h,k,r,s are\n");
scanf("%f %f %f %f",&h,&k,&r,&s);

printf("the value of s is");
d=(s-h);
printf("the value of d is%f,d\n");
x=sqrt((r*r)-(d*d));
y=2*x;
printf("the value of y is %f",y);







}
