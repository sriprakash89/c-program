#include<stdio.h>
//https://www.jdoodle.com/c-online-compiler
int main()
{
  int a,b,c=0,d=1;
  printf("enter a number:\n");
  scanf("%d",&a);
  for(b=0;b<100;b++)
  {
      d=d*2;
  if(a==d)
  c++;
  }
  if(c!=0)
  printf("its a power of 2");
  else
  printf("its not a power of 2");
}

