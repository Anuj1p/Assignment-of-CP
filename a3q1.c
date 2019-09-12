/*question number 1*/
/* find the biggest number */

#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
printf("the value of a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a>b)
	if(a>c)
	printf("a is the greatest %f",a);
	else
	printf("c is the greatest %f",c);

else
if(b>c)
printf("b is the greatest %f",b);
else 
printf("c is the greatest%f",c);

}
