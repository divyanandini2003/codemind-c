#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
}