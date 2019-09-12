/*question 8*/
#include<stdio.h>
#include<math.h>
void main()

{
float b,c,d,A,B;
printf("the value of b,c,d are");
scanf("%f%f%f",&b,&c,&d);
A=acos((c*c+d*d-b*b)/(2*d*c));
B=(A*180)/3.14;
printf("the value of A is%f",A);
printf("the value of B is%f",B);





}
