#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i+2]%2!=0)
            {
                c++;
            }
        }
        if(a[i]%2!=0)
        {
            if(a[i+2]%2==0)
            {
                d++;
            }
        }
    }
    printf("%d",c+d);
}