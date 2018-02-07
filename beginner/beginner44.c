#include<stdio.h>
//https://www.jdoodle.com/c-online-compiler
int main()
{
  int a,c=0,i;
  printf("enter a number:\n");
  scanf("%d",&a);
 for(i=1;i<=10;i++)
 {
     if(a==i)
     c++;
 }
 if(c!=0)
 {
     printf("oh yeah! its available");
 }
 else
 printf("oh no! its not present");
}
