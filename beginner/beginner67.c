#include<stdio.h>
int main() {
   int i,n;
   printf("enter a number\n");
   scanf("%d",&n);
   for(i=n;i<=n+10;i++)
   {
       if(i%10==0)
       {
       printf("%d",i);
       break;
       }
   }
}
