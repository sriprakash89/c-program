#include<stdio.h>
void main()
{
	char a[100];
	int i,h=0,b=0,j;
	scanf("%s",a);
	printf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		h++;
	}
	i=0;
	for(j=h-1;j>=0;j--)
	{
		printf("%c\t%d\t%c\t%d\n",a[i],i,a[j],j);
		if(a[i]==a[j])
		b++;
		i++;
	}
	printf("\n%d\t%d",b,h);
	if(b==h)
	printf("\npalindrome");
	else
	printf("\nnot a palindrome");
}
