#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
    if(c%2==0)
    printf("\noh yes......... its an even number");
    else
    printf("\noh yes........ its an odd number");
}
