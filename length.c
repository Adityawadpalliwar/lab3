#include<stdio.h>
int main(){

int a,i=0,k;

printf("enter the number: ");
scanf("%d",&a);
k=a;

if (k==0)
 printf("number of digits in %d is 1",a);
else
 {
  while(k!=0)
  {k=k/10;
    i++;
  }
   printf("number of digits in %d is %d",a,i);
 }

 return 0;
} 
