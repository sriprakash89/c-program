#include<stdio.h>
void main()
{
	int p,n,r;
	printf("enter the principle amount\nenter the time duration\nenter the intrest rate\n");
	scanf("%d %d %d",&p,&n,&r);
	printf("the simple intrest is: %d",p*n*r/100);
}
