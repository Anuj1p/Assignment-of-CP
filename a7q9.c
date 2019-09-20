/*question number 9*/
#include<stdio.h>
void main()
{
float a,b,c,d,complex1,complex2,e,f,g,h;
printf("enter the numbers:");
scanf("%f%f%f%f",&a,&b,&c,&d);
printf("complex1: %0.4f + %0.5fi",a,b);
printf("\ncomplex2: %0.6f + %0.6fi",c,d);
g=a*c-b*d;
h=a*d+b*c;
e =((a*c)+(b*d))/((c*c)+(d*d));
f =((b*c)-(a*d))/((c*c)+(d*d));
printf("\n%f \t%f",e,f);
printf("\n multiplication of complex number is: %f+%fi",g,h);	
printf("\n division of complex numbers is: %f + %fi",e,f);
}






