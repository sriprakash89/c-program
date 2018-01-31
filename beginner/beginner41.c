#include<stdio.h>
#include<string.h>
int main()
{
int a,i;
char b[50];
printf("enter the string and no. of times to print\n" );
gets(b);
scanf("%d",&a);
for(i=0;i<a;i++)
{
puts(b);
puts("\n");
}
}
