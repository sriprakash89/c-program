#include<stdio.h>
void main()
{
	int a,b,i,k=0;
	scanf("%d %d",&a,&b);
	for(i=2;i<a&&i<b;i++)
	{
		if(a%i==0&&b%i==0)
		{
		printf("THE GCD is:%d",i);
		break;
    	}
	}
	
}
