#include<stdio.h>
void main()
{
int m,n,r,s=0;
printf("Enter the value of n:\n");
scanf("%d",&n);
m=n;
while(m!=0)
{
r=m%10;
s=s+r*r*r;
m=m/10;
}
if(s==n)
printf("The number is Armstrong\n");
else
printf("The number is not Armstrong\n");
}


