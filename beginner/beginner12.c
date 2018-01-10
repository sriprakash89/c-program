#include<stdio.H>
void main()
{
int sum=0,a,i,n;
scanf("%d",&a);
i=a;
n=i;
whlie(n!=0)
{
n%=10;
sum=sum*10+n;
i/=10;
}
if(sum==i)
printf("palindrome");
else
printf("not a palindrome");
}
