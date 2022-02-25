#include<stdio.h>
int main()
{
    int n,r,sum=0,c;
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(c==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}