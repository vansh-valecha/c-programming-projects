#include<stdio.h>
void reverse(int n)
{
     int i,a=1,s=0,r=0;
      for(i=0;i<=n;i++)
     {
          a=n%10;
          r=r*10+a;
          n=n/10; 
          s=s+a;
     }
     printf("reverse of a no is %d",r);
     printf("sum is %d ",s);
}
int main()
{
     int n;
     printf("enter a digit");
     scanf("%d",&n);
     reverse(n);
}      
