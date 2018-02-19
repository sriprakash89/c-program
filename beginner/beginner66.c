#include<stdio.h>
int main() {
   int i,n,count=0;
   printf("enter a number\n");
   scanf("%d",&n);
   for(i=2;i<=(n-1)/2;i++)
   {
       if(n%i==0)
       count++;
   }
   if(count==0)
   printf("prime number");
   else
   printf("not a prime number");
}
