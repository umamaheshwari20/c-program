#include<stdio.h>
void main()
{
int a,b,ch;
printf("Enter the values of a and b:\n");
scanf("%d %d", &a, &b);
printf("1.add\n");
printf("2.substraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("Enter your ch\n");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("%d", a+b);
break;
case 2:
printf("%d", a-b);
break;
case 3:
printf("%d", a*b);
break;
case 4:
printf("%d", a/b);
break;
default:
printf("Nothing");
}
}


