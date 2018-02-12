#include<stdio.h>
int main() {
   int f=1,s=1,i,temp,n,t=0;
   printf("enter a number\n");
   scanf("%d",&n);
   if(t==0)
   {
       printf("%d\t%d\t",f,s);t=1;temp=f;f=s;
   }
   
   for(i=0;i<n-2;i++)
   {
       temp=s+f;
       printf("%d\t",temp);
       f=s;
       s=temp;
       
   }
}
