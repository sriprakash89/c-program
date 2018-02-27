#include<stdio.h>
int rec(int );
void main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	rec(a);
}
int rec(int a)
{
	if(a%2==0)
	a=rec(a/2);
	else
	printf("the number is : %d",a);
	return 0;
}
