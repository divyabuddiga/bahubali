#include<stdio.h>
void main()
{
int m,n,i,j,a[10][10],b[10][10];
printf("enter the no  of  rows and columns of matrix \n");
scanf("%d%d",&m,&n);
printf("enter the matrix elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[i][j];
}
}
printf("the  transpose of  matrix is \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
}


