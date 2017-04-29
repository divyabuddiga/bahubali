#include<stdio.h>
int main()
{
  int m,n,p,q,sum,a[10][10],b[10][10],c[10][10],i,j,k;
printf("enter rows and columns for matrix1:\n");
scanf("%d%d",&m,&n);
printf("enter row and columns for matrix2:\n");
scanf("%d%d",&p,&q);
if(n!=p)
printf("matrix multipication not possible\n");
else
{
printf("enter value for matrix1\n");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter values for matrix2\n");
for(i=0;i<p;i++)
{
 for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(k=0;k<p;k++)
{
sum=0;
for(j=0;j<q;j++)
{
 sum=a[i][k]*b[k][j];
}
c[i][j]=sum;
}
}
printf("final matrix is \n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
return 0;
}
}
