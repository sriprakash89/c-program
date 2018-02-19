#include<stdio.h>
int main()
{
    int i,n,sum=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<100;i+2)
    {
        sum=sum*i;
        if(sum>n)
        {
        printf("%d\n",sum);
        break;
        }
    }
}
