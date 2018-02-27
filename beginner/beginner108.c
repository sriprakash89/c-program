#include<stdio.h>
void main()
{
	int a,d,n,sum=0,i,h;
	printf("enter the value of A & B & C\n");
	scanf("%d %d %d",&a,&d,&n);
	h=a;
	for(i=1;i<=n;i++)
	{
		sum=sum+h;
	    h=h+d;
	}
	printf("%d",sum);
}

