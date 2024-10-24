#include<stdio.h>

int main()
{
	int a,i;
	printf("enter the number n: ");
	scanf("%d",&a);
	
	for (i=1;i<=a;i++)
	{ if (i%2!=0)
	    printf("\n %d",i);
	}
	return 0;
}
