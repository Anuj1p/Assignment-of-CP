/*question no. 3*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,line1,line2,line3,s,area;
printf("enter the coordinates of triangle");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
line1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
line2= sqrt((e-c)*(e-c)+(f-d)*(f-d));
line3=sqrt((e-a)*(e-a)+(f-b)*(f-b));
s= (line1+line2+line3)/2;
area=sqrt(s*(s-line1)*(s-line2)*(s-line3));
printf("the area is %f",area);





}

