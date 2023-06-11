#include<stdio.h>
#include<conio.h>
main()
{
int first_angle;
int second_angle;
int third_angle;
clrscr();
printf("enter angle first:");
scanf("%d",&first_angle);
printf("enter angle second:");
scanf("%d",&second_angle);
third_angle=180-(first_angle+second_angle);
printf("the value ofthird angle:%d",third_angle);
getch();
}