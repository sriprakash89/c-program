#include<stdio.h>
void main()
{
	char a[100];
	int i,n=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	if(n%2==0)
	{
		a[n/2]='*';
		a[(n/2)-1]='*';
	}
	else
	a[n/2]='*';
	printf("%s",a);
}
