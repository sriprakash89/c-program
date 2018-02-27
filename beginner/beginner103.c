#include<stdio.h>
void main()
{
	int i;
	char b[100];
	printf("enter a sentence");
	scanf("%[^\n]s",b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==b[0])
		{
		b[i]=b[i]-32;
	    }
	   else if(b[i-1]==' ')
	    {
		b[i]=b[i]-32;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
}
