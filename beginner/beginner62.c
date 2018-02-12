#include<stdio.h>
int main() {
   int z=0,i,h,b,n;
   printf("enter a nummber\n");
   scanf("%d",&b);
   h=b;
   while(b!=0)
   {
       n=h%10;
       if((n==1)||(n==0))
       z=0;
       else
       {z=1;}
       b=b/10;
   }
   if(z==0)
   printf("yeah hae... yes");
   else
   printf("oh! no");
}
