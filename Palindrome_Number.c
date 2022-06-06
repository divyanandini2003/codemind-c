#include<stdio.h>
int ispalindrome(int N)
{
    int t,r,p=0;
    t=N;
    while(N>0)
    {
        r=N%10;
        p=p*10+r;
        N=N/10;
    }
    if(p==t)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        if(ispalindrome(a[i])==true)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}