#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-3;j++)
        {
            printf("%d",j);
        }
        for(k=j;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("
");
    }
}