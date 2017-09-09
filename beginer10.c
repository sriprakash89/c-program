#include<stdio.h>
void main()
{
int n=0,a,i;
scanf("%d",a);
i=a;
while(i!=0)
{
i=a/10;
n++;
}
printf("%d",n);
}
