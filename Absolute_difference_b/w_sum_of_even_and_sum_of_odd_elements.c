#include<stdio.h>
int main()
{
    int n,i,e=0,o=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
             e+=a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    if(e>o)
    {
        d=e-o;
    }
    else
    {
        d=o-e;
    }
    printf("%d",d);
}