#include<stdio.h> //Created By Kashaf xD
#include<conio.h>
void main()
{
int ek, doo, teen;
clrscr();
printf("Enter Your first side : ");
scanf("%d",&ek);
printf("Enter Your second side : ");
scanf("%d",&doo);
printf("Enter Your third side : ");
scanf("%d",&teen);
if(ek==doo && doo==teen && teen==ek)
{
printf("Ye Equilateral Hai");
}
else if(ek==doo || doo=teen || teen==ek)
{
printf("ye isoscales hai");
}
else
{
printf("ye scalane hai");
}
getch();
}