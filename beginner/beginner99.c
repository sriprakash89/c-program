#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the values of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",a*b%c);
}
