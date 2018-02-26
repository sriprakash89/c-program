#include<stdio.h>
void main()
{
	int n,a[100],sum=0,i;
	printf("enter the value of N\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
}
