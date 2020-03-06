#include<stdio.h>
void main()
{
int i,n,flag=1;
printf("Enter the value of n:\n");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=0;
break;
}
}
if(flag==1)
{
printf("The given number is prime\t");
}
else
{
printf("composite\t");
}
}
