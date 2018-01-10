#include <stdio.h>
 
int main()
{
  int c;
 
  printf("Enter a number ");
  scanf("%d", &c);
 
  if(c>1)
     printf("positive");
  else if(c==0)
     printf("zero");
  else
     printf("negative");

  return 0;
}
