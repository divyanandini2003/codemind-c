#include<stdio.h>
int main()
{
    int n,se,i,c=0;
    scanf("%d%d",&n,&se);
    int a[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%se==0)
        {
            c++;
        }
    }
    printf("%d",c);
}