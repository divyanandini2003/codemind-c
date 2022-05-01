#include<stdio.h>
int main()
{
    int i,n,a[100],es=0,os=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         if(i%2==0)
         {
             es=es+a[i];
         }
         else
         {
             os=os+a[i];
         }
     }
     sum=es-os;
     printf("%d",sum);
}