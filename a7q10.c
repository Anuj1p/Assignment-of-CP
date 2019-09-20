/*question number 10*/

#include<stdio.h>
void main()
{
float a,b,c,d;

printf("enter the numbers:");
scanf("%f%f%f",&a,&b,&c);
printf("line: %fx + %fy + %f",a,b,c);
d=-c/a;
printf("\n point of intersection: (%0.2f,0)",d);
}




