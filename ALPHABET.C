#include<stdio.h> //Make By Kashaf xD
#include<conio.h>
void main()
{
char cha;
clrscr();
printf("Enter Your Character : ");
scanf("%c",&cha);
if(cha>='a' && cha<='z')
{
printf("Apka Character Alphabet hai");
}
else if(cha>='0' && cha<='9')
{
printf("aapka character number hai");
}
else
{
printf("aapka character special character hai");
}
getch();
}