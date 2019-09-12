/*question number 11*/

#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("the value of a,b,c are");
scanf("%d%d%d",&a,&b,&c);
if((a>b&&b>c)||(a<b&&b<c))
printf("the value is %d",b);

if((b>c&&c>a)||(b<c&&c<a))
printf("the value is %d",c);

if((c>a&&a>b)||(c<a&&a<b))
printf("the value is %d",a);	









}
