#include<stdio.h>
int main()
{
    int n,ar[n],a,b,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]>a && ar[i]>b ||ar[i]<a && ar[i]<b)
        {
            s=s+ar[i];
        }
    }
    printf("%d",s);
}