#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        printf("%d
",sum);
    }
}