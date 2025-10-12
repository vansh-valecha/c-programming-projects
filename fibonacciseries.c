#include<stdio.h>
int main(){
    int n,i,f1=0,f2=1,f3;
    printf("enter upto which u want to print\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",f1);
    }
    else if(n==2)
    {
        printf("%d%d",f1,f2);
    }
    else{
            printf("%d%d",f1,f2);
            for(i=3;i<=n;i++)
            {
                f3=f1+f2;
                printf("%d",f3);
                f1=f2;
                f2=f3;
            }  
        }     
        return 0;
}
