#include<stdio.h>
void main()
{
int a,i,sum=0;
printf("enter the limit of natural numbers");
scanf("%d",&a);
for(i=0;i<=a;i++)
sum=sum+i;
printf("%d",sum);
}
