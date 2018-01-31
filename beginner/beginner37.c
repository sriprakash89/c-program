#include<stdio.h>
void main()
{
int i,j;
scanf("%d%d",&i,&j);
swap(i);
printf("\n");
swap(j);
}
int swap(int a)
{
int h=a,n;
for(n=h;n!=0;n=h/10)
{
 a=n%10;
 printf("%d",a);
 h=n;
}
return 0;
}
