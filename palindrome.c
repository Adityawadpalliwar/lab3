#include<stdio.h>
#include<math.h>
int main(){
 long int num,l,rev=0, j;
 printf("enter the value of number: ");
 scanf("%ld",&num);
 j=abs(num);
 if(j==0)
   rev=0;
 else 
   { while(j>0)
    {
    l=j%10;
    j=j/10;
    rev=rev*10+l;

    }
    
   }
 if (num==rev)
 printf("the given number is palindrome");
 else
 printf("the given number is not a palindrome");
 return 0;
}