#include<stdio.h>
#include<conio.h>
main()
{
int celcius;
float fehrenheit;
clrscr();
printf("enter temprature in celcius:");
scanf("%d",&celcius);
fehrenheit=(celcius*9/5)+32;
printf("the value of temptature in fehrenheit:%f",fehrenheit);
getch();
}