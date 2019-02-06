#include<stdio.h>
#include<conio.h>
void main()
{
char char;
clrscr();
scanf("%c",&char);
if((char>='a' && char<='z') || (char>='A'&&char<='Z'))
 printf("Alphabet");
else
 printf("No");
getch();
}
