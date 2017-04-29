#include<stdio.h>
int fact(int x)
{
  if(x<2)
  return 1;
else
return x*fact(x-1);
}
 int main()
{
  int i,j,n;
printf("enter no of rows\ n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 for(j=0;j<=(n-i-2);j++)
printf("  ");
for(j=0;j<=i;j++)
printf("%d ",fact(i)/(fact(j)*fact(i-j)));
printf("\n");
}
}

