#include<stdio.h>
struct student
{
  char name[20];
 char dob[10];
int roll;
};
 int main()
{
 struct student s[2];
int i;
for(i=0;i<2;i++)
{
scanf("%s%s%d",s[i].name,s[i].dob,&s[i].roll);
}
for(i=0;i<2;i++)
{
printf("%s%s%d",s[i].name,s[i].dob,s[i].roll);
printf("\n");
}
return 0;
}
