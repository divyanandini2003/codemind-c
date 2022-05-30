#include<stdio.h>
int main()
{
    int n,j,i,dc=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            printf("%d ",i);
            dc++;
        }
    }
    printf("
Total=%d",dc);
    return 0;
}