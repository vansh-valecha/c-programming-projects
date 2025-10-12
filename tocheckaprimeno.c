#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    { if (n%i==0)
       s=s+1;
    }
    if(s==0)
    {
        printf("prime no");
    }
    else
    printf("not a prime no");
}
