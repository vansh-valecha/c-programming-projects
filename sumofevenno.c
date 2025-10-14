#include<stdio.h>
void input(int a[],int size)
{ 
     int i;
     for(i=1;i<=size;i++)
     scanf("%d",&a[i]);
}
int main()
{
     int i,a[50],n,c=0;
     printf("enter size of array");
     scanf("%d",&n);
     printf("enter array");
     input(a,n);
     for(i=1;i<=n;i++)
     {
     if(a[i]%2==0)
     {
          c=c+a[i];
     }
     }
      printf("sum of even no.:%d",c);
      return 0;
