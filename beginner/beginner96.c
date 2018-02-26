#include<stdio.h>
void main()
{
	int a,i,t=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		t++;
	}
	if(t!=0&&a!=2)
	printf("composite");
	else
	printf("not a composite");
}
