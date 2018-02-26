#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d.%d",&a,&b);
	if(b==5||b>5)
	printf("%d",++a);
	else
	printf("%d",a);
}
