#include<stdio.h>
int main()
{
    char a[100];
    int i,h=0,t=0,y=0;
    printf("enter a string\n");
    for(i=0;i<100;i++)
    {
        scanf("%[^\n]s",&a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a')&&(a[i]<='z'))
        t=1;
        else if((a[i]>='0')&&(a[i]<='9'))
        y=1;
    }
    if((t==1)&&(y==1))
    printf("oh yeah both are present");
    else
    printf("oh no.... try again");
        
}
