#include<stdio.h>
int main()
{
    int n,a[n],i,j,flag=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
               flag=1;
            }
        }
        if(flag==1)
        {
            s=a[i];
        }
    }
    printf("%d",s);
}