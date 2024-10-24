#include<stdio.h>
int main(){

int a,i=0,k,b,sum=0;

printf("enter the number: ");
scanf("%d",&a);
k=a;

if (k==0)
 printf("sum of digits in %d is 0",a);
else
 {
  while(k!=0)
  {
    b=k%10;
    k=k/10;
    sum= sum+b;
  }  
   printf("sum of digits in %d is %d",a,sum);
 }

 return 0;
} 
