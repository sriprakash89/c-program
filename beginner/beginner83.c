#include<stdio.h>
void main()
{
	int a[8],i,j;
	char b[4];
	for(i=0,j=4;i<4&&j<8;i++,j++)
	{
		scanf("%d %c %d",&a[i],&b[i],&a[j]);
	}
	for(i=0,j=4;i<4;i++,j++)
	{
		switch(b[i])
		{
			case '+':
				printf("\n%d",a[i]+a[j]);
				break;
			case '/':
				printf("\n%d",a[i]/a[j]);
				break;
			case '%':
			    printf("\n%d",a[i]%a[j]);	
			    break;
			default:
				printf("no such function");
		}
	}
}
