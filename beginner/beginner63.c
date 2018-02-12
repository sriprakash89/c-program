#include<stdio.h>
int main() {
   char c[100];
   int i,h=0,d=0;
   printf("enter a string");
   for(i=0;i<100;i++)
   {
       scanf("%[^\n]s",&c[i]);
       h++;
   }
   for(i=0;i<h;i++)
   {
       if(c[i]==' ')
       {
           d++;
       }
   }
   printf("\n%d",d);
   }
