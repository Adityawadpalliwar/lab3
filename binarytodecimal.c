#include<stdio.h>
#include<math.h>

int main(){
    int num,l;
    float sum=0;
    int i=0,k;
    float t;
    printf("enter the number: ");
    scanf("%d",&num);
    
    l=num;
    while (num!=0)
    {
       k=num%10;
       t=(pow(2,i));
       sum=sum+(k*t); 
       num=num/10;
       i++;
    }
    
   printf("\nthe decimal form of %d is %d",l,(int)sum);
   return 0;

}