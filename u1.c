#include<stdio.h>
void main()
{
int year;
printf("Enter year\n");
scanf("%d", &year);
if(year%4==0)
{
printf("The year is leap year\n");
}
else
{
printf("Year is not leap year\n");
}
}
