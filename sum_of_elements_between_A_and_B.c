#include<stdio.h>
int main()
{
    int n,i,a[n],s=0,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(a[i]>=m && a[i]<=k)
        {
            s+=a[i];
        }
    }
    printf("%d",s);
}