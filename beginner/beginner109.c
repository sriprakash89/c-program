#include<stdio.h>
void main()
{
	int a[10],t,h=0,i;
	printf("enter the 10 numbers");
	scanf("%d",&a[0]);
	h=a[0];
	for(i=1;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
			if(a[i]<h)
		h=a[i];
	}
	printf("tne minimum number is :%d",h);
}
