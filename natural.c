#include<stdio.h>

int main()
{
	int i,sum=0,n;
	printf("enter the value of n: ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{ sum+=i;
	} 
	 
	printf("the sum of first %d natural number is %d",n,sum);
	return 0;
}
