#include <stdio.h>

struct Bookinfo
{
      char[20] bname;
      int pages;
      int price;
}book[3];

int main(int argc, char *argv[])
{
int i;

for(i=0;i<3;i++)
    {
    printf("\nEnter the Name of Book    : ");
    gets(book[i].bname);
    printf("\nEnter the Number of Pages : ");
    scanf("%d",book[i].pages);
    printf("\nEnter the Price of Book   : ");
    scanf("%f",book[i].price);
    }    
