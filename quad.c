#include<math.h>
#include<stdio.h>
int main()
{
 float a,b,c,d,r1,r2;
printf("coefficient of x*x:");
scanf("%f",&a);
printf("coefficient of x:");
scanf("%f",&b);
printf("constant:");
scanf("%f",&c);
d=(b*b)-(4*a*c);
if(d<0)
printf("roots are imaginary");
else
{
  r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("roots are:%fand%f",r1,r2);
}
return 0;
}
