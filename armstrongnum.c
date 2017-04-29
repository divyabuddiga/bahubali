#include<stdio.h>
int main()
{
int a,b,c,n,t,arm;
printf("enter the value of  n");
scanf("%d",&n);
t=n;
a=n%12;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
n=n/10;
arm=(a*a*a)+(b*b*b)+(c*c*c);
if (arm==t)
{
printf("armstrong number");
}
else
{
printf("not armstrongnumber");
}
}
