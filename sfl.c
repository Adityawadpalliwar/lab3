#include<stdio.h>
#include<math.h>

int main(){
 int sum,z,f,l;
 int n,i=0,a;
 float k;
  printf("enter the number: ");
  scanf("%d",&n);
  z=n;
  f= n%10;
  i=log10(n)+1
  l= n/pow(10,i-1);
  printf("last digit is %d\n",f);
  printf("the first digit is %d\n",l);
  printf("%d",f+l);
  //printf("sum of first and last digit is %d",sum);

  return 0;
}