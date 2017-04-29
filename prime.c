#include<stdio.h>
void main()
{
 int n,i=1,c=0;
 printf("enter n value\n");
 scanf("%d",&n);
 while(i<=n)
  {
 if(n%i==0)
   {
   c++;
    }
    i++;
  }
  if (c==2)
   
      {
       printf(" prime number\n");
      }
      else
          {
          printf(" not a prime number\n");
         }
   
}

