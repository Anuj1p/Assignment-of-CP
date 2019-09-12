/*question no. 6*/
#include<stdio.h>
#include<math.h>
void main()
{
float x,y,a,b,c,centre1,centre2,radius;
printf("enter the value of a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
centre1=-(a)/2;
centre2=-(b)/2;
radius=sqrt((a*a)/4 +(b*b)/4 -c);
printf("the value of x coordinate%f",centre1);
printf("the value of y coordinate%f",centre2);
printf("the value of radius is%f",radius);






}
