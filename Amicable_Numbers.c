#include<stdio.h>
int main()
{
    int n,m,i,sum=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}