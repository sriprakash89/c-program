#include<stdio.h>
void main()
{
	int n,k,a[10],i=0,h=0;
	scanf("%d",&n);
	while(n!=0)
	{
		k=n%10;
		if((k+1)%2==0){
		a[i]=k;
		i++;h++;
	}
		n=n/10;
	}
	for(i=h-1;i>=0;i--)
    {
      printf("%d\n",a[i]);
    }
}
