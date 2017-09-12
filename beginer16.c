#include<stdio.h>
void main()
{
int a,b,i,count;
printf("enter the two limits");
scanf("%d%d",a,b);
for(i=a;i<b;i++)
{
count=0;
for(int n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("prime number\n");
else
printf("not a prime number\n");
}
}

