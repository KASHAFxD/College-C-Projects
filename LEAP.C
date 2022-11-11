#include<stdio.h> //Created By Kashaf xD
#include<conio.h>
void main()
{
int saal;
clrscr();
printf("Enter Your Year : ");
scanf("%d",&saal);
if(saal%4==0)
{
printf("Apka Year Leap Year Hai");
}
else if(saal%400==0)
{
printf("aapka year leap year hai");
}
else
{
printf("aapka year leap yeae nahi hai ");
}
getch();
}