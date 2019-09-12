/*question number 10*/

#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,d,x,A,B,C,D,sum;
printf("the value of a,b,c,d,x");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);

if(a==x)
{ A=1;}
else
{ A=0;}
if(b==x)
{ B=1;}	
else
{ B=0;}
if(c==x)
{ C=1;}	
else
{ C=0;}
if(d==x)
{ D=1;}
else
{ D=0;}
sum=A+B+C+D;
printf("the values are%d",sum);


}

