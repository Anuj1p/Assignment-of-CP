/*question number 5*/
/*slope of line a*x + b*y + c=0
 * print line is vertical or not*/

#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d;
printf("the value of a,b,c are");
scanf("%f %f %f",&a,&b,&c);
d=(-a)/b;
printf("the value of slope is%f",d);
if(-a/b==0) 
printf("slope is not vertical");
else
printf("slope is vertical");	






}
