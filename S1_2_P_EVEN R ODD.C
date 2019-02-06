#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a<0)
 printf("Invalid");
else if(a%2==0)
 printf("Even");
else
 printf("Odd");
getch();
}
