#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,sum,percentage;
printf("Enter the values of s1,s2,s3,s4,s5:\n");
scanf("%d %d %d %d %d", &s1,&s2,&s3,&s4,&s5);
sum=s1+s2+s3+s4+s5;
percentage=sum*100/500;
if(percentage>=90)
printf("grade=s\n");
else
if(percentage>80 && percentage<=89)
printf("grade=a\n");
else if(percentage>70 && percentage<=79)
printf("grade=b\n");
else if(percentage>60 && percentage<=69)
printf("grade=c\n");
else 
printf("grade=fail\n");
}
