#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,ch;
clrscr();
printf(" 1. Addition\n 2. Subtraction \n 3. Multiply \n 4. divided");
printf("\nPehla Number Dalo\n");
scanf("\n%d",&a);
printf("      Addition Ke Liye 1 Dabaye\n\n      Subtraction Ke Liye 2 Dabaye\n\n      Multiplication Ke Liye 3 Dabaye\n\n      Divide Ke Liye 4 Dabaye");
scanf("\n%d",&ch);
printf("\ndoosra number dalo");
scanf("\n%d",&b);
switch(ch){
case 1:
printf("addition:%d", a+b);
break;

case 2:
printf("subtraction:%d", a-b);
break;

case 3:
printf("multiply:%d", a*b);
break;

case 4:
printf("divided:%d", a/b);
break;

default:
printf("Invalid");
 }
getch();
}
