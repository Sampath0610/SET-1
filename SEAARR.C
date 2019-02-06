#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,search,flag=0;
clrscr();
for(i=0;i<10;i++)
 scanf("%d",&a[i]);
scanf("%d",&search);
for(i=0;i<10;i++)
{
  if(a[i]==search)
  {
    flag=1;
    printf("Found");
    //break;
  }
}
if(flag==0)
 printf("NOt");
getch();
}