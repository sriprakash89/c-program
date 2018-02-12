#include<stdio.h>
int main() {
   int n,i;
   char a[10];
   printf("enter a string\nenter a nummber\n");
   for(i=0;i<=10;i++)
   {
      scanf("%c",&a[i]);

   }
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("%c",a[i]);
   }
   return 0;
}
