#include<stdio.h>
int main()
{
    int n,i,d;
    printf("enter two numbers\n");
    scanf("%d%d",&n,&i);
    d=n-i;
    if(d%2==0)
    printf("even");
    else
    printf("odd");
}
