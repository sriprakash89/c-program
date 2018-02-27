#include<stdio.h>
void main()
{
	int n,k,i,sum=1;
	printf("enter the value of N & k\n");
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		sum=sum*n;
	}
	printf("%d",sum);
}
