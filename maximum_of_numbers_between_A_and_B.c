#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c,d=0,min=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if(a[i]>=b && a[i]<=c)
        {
            if(a[i]>min)
            {
                min=a[i];
                d++;
            }
        }
    }
    if(d!=0)
    {
        printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}