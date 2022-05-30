#include<stdio.h>
int main()
{
    int n,temp,r,s=0,i;
    long f;
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        f=1,i=1;
        r=temp%10;
        while(i<=r)
        {
            f=f*i;
            i++;
        }
        s=s+f;
        temp=temp/10;
    }
    if(n==s)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
    return 0;
}