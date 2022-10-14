#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;

clrscr();
printf("Enter First Number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
printf("    press 1 for adding\n     press 2 for average\n");
scanf("%d",&d);
switch(d){
case 1:
printf("addition of all:%d", a+b+c);
break;

case 2:
printf("average of all%d", (a+b+c)/3);
break;
default:
printf("choose from 1 or 2");
break;
}
getch();
}