#include<stdio.h>
#include<conio.h>
main()
{
  int base_salary;
  float ta;
  float da;
  float hra;

clrscr();
  printf("enter base_salary:");
  scanf("%d",&base_salary);

  ta=base_salary*0.08;
  da=base_salary*0.05;
  hra=base_salary*0.10;
  printf("Gross salary is:%f",hra+ta+da+base_salary);
  getch();
}