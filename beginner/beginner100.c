#include<stdio.h>
void main()
{
int a,sum=1,n;
	printf("enter a number\n");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		sum=sum*n;
		a=a/10;
	}
	printf("the multipled number is %d",sum);
}
