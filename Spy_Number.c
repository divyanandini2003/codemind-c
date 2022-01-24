#include<stdio.h>
int main()
{
    int n,sum=0,pro=1,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        pro=pro*r;
        sum=sum+r;
        n=n/10;
        
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else 
    {
        printf("Not Spy Number");
    }
}