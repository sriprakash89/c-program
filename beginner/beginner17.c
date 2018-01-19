#include<stdio.h>
int main()
{
int a,i,n,sum=0;
scanf("%d",&a);
i=a;
n=i;
while(n!=0)
{
i=n%10;
sum=sum+(i*i*i);
n=n/10;
}
if(a==sum)
printf("amstrong num");
else
printf("not an amstrong num");
}
