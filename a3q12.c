#include<stdio.h>
#include<math.h>
void main()
{
float p,q,r,a,b,c,e,distance,loc,area;
printf("the value of p,q,r,a,b,c");
scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
if(distance<r)
distance=(a*p+b*q+c)/(sqrt(a*a+b*b));

e=sqrt((r*r)-(distance*distance));
loc=(2*e);
area=((0.5)*loc*distance);
printf("the area is %f",area);
if(distance>r)
printf("not intersect");	











}
