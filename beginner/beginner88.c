#include<stdio.h>
void main()
{
	int a,b,i,k=0;
	scanf("%d %d",&a,&b);
	for(i=2;i<=1000;i++)
	{
		if(i%a==0&&i%b==0)
		{
			k=i;
			break;
		}
	}
	if(k!=0)
	printf("LCM is:%d",k);
	else
	printf("LCM is:%d",k);
}
