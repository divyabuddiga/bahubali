#include<stdio.h>
void main()
{
 int n,i,s;
  printf("enter the range\n");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2!=0)
     {
      printf("%d\n",i);
      s=s+i;
     }
    printf("sum is %d\n",s);
  }
}

