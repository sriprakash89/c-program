#include<stdio.h>
void main()
{
	int i,j,k,a,t=0;
	scanf("%d%d",&i,&j);
	k=i*j;
	printf("%d",k);
	for(a=1;a<100;a++)
	{
	    if(k==a*a)
	    t=1;
    }
    if(t==1)
    printf("\nperfect square");
    else
    printf("\nnot a perfect square");
}
