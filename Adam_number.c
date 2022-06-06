#include<stdio.h>
int reverse(int n)
{
    int sum=0;
    while(n)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n*n;
    b=reverse(n);
    c=b*b;
    d=reverse(c);
    if(a==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
