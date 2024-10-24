#include<stdio.h>
int main()
{
 int a=0,b=1;
 int i,n,c;
 scanf("%d",&n);
 if (n<3)
  {
    switch(n)
    {
     case 1:
     {printf("%d",a);
     break;
     }
    case 2:
     {printf("%d,%d",a,b);
     break;
     }

    }
  }
else
 
{ printf("%d,%d,",a,b);
  for(i=0;i<n-2;i++)  
 {
   c=a+b;
   printf("%d,",c);
   a=b;
   b=c;

   
 } 
}    
    return 0;

}
