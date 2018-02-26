#include<stdio.h>
void main()
{
	int l,r,n,i,c=0;
	printf("enter the N value\nenter the L & R value\n");
	scanf("%d %d %d",&n,&l,&r);
	for(i=l;i<=r;i++)
	{
		if(n==i)
		c++;
	}
	if(c>0)
	printf("yes present");
	else
	printf("no");
}
