#include<stdio.h>
int main()
{
int a,n,i,j=1;
printf("enter a number \n enter the power");
scanf("%d%d",&a,&n);
for(i=1;i<=n;i++)
{
j=j*a;
}
printf("%d",j);
}
