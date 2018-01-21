#include<stdio.h>
int main()
{
   int n,a[100],i,t;
   printf("enter the count\nenter the elements");
   scanf("%d",&n);
   scanf("%d",&a[1]);
   t=a[1];
   for(i=2;i<=n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]<=t)
       {
           t=a[i];
       }
   }
   printf("\n%d",t);
}
