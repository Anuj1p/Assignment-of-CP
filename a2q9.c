/*question 9*/
/*find centre,radiusand area of intersection of plane and sphere
 * plane a*x+b*y+c*z+d=0
 * sphere x*x+y*y+z*z+e*x+f*y+g*z+h=0*/
#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,g,h,j,k,l,m,r,p,q;
printf("the value of a,b,c,d,e,f,g,h");
scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
j=(-e)/2;
k=(-f)/2;
l=(-g)/2;
printf("the centre of sphere is%f  %f  %f\n",j,k,l);
m=(a*j+b*k+c*l+d)/sqrt(a*a+b*b+c*c);
printf("the distance of centre to plane is %f\n",m);

r=sqrt(((-e)/2)*((-e)/2)+((-f)/2)*((-f)/2)+((-g)/2)*((-g)/2)-h);
printf("the radius of the sphere is%f\n",r);

p=sqrt((r*r)-(m*m));
printf("the radius of circle is%f\n",p);

q=(3.14)*p*p;
printf("the area of circle is%f\n",q);





}
