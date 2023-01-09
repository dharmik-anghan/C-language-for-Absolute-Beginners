#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf(" Enter a Three Digit Number:");
scanf("%d" ,&a);
b = (a / 10) % 10 ;
prinf("Middle digit=%d\n" ,b);
getch();
}
