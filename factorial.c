#include<stdio.h>

int main()
{
	int i,f=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ f=f*i;
	}
	printf("the factorial of given natural number %d is %d",n,f);
	return 0;
}
