/*question no. 2*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,distance;
printf("enter the coordinates of rectangle");
scanf("%f%f%f%f",&a,&b,&c,&d);
distance= sqrt((a-c)*(a-c)+(b-d)*(b-d));
printf("the distance is %f",distance);




}	
