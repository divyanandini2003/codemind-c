#include<stdio.h>
int main()
{
    int n,a[n],i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=1;i<=n;i++)
     {
         sum=sum+a[i];
     }
     printf("%d",sum);
     
}