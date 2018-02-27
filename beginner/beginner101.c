#include<stdio.h>
void main()
{
	int a,i,h,k;
	char b[100];
	printf("enter a string\n");
	scanf("%s",b);
	printf("enter a N value\n");
	scanf("%d",&a);
	for(i=0;b[i]!='\0';i++)
	{
		h++;
	}
	k=h-1-a;
	for(i=k;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
}
