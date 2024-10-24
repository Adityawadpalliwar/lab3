#include<stdio.h>
#include<math.h>
int main(){
 long int num,l,rev=0, j;
 printf("enter the value of number: ");
 scanf("%ld",&num);
 j=abs(num);
 if(j==0)
   printf("reverse of given number is zero");
 else 
   { while(j>0)
    {
    l=j%10;
    j=j/10;
    rev=rev*10+l;

    }
    printf("reverse of given number is %ld",rev);
   }
 return 0;
}