#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>0||n==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float avg=0,sum=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i])==0)
        {
            sum+=a[i];
            c++;
        }
    }
    avg=sum/c;
    printf("%.2f",avg);
}
