#include<stdio.h>
void main()
{
	int a,i,k=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		k++;
	}
	if(k!=0&&a!=2)
	printf("composite");
	else
	printf("not a composite");
}
