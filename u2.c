#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a,b,c");
scanf("%d %d %d", &a,&b,&c);
if(a>>b && a>>c)
printf("a\n");
else if(b>>a && b>>c)
printf("b\n");
else
printf("c\n");
}
