#include<stdio.h>
int main()
{
    int n,r,oc=0,ec=0,dc=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        dc++;
        if(r%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    if(oc==dc)
    {
        printf("Odd");
    }
    else if(ec==dc)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}