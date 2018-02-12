#include<stdio.h>
void swap(int );
int main() {
   int x,y;
   scanf("%d%d",&x,&y);
   swap(x);
   swap(y);
   return 0;
}
void swap(int a)
{
    int n,i=0,h,b[10],f=0;
    n=a;
    while(n!=0)
    {
        h=n%10;f++;
        b[i]=h;
        i++;
        n=n/10;
    }
    for(i=0;i<f;i++)
    {
    printf("%d",b[i]);
}
printf("\n");
}
