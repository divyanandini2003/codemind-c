#include<stdio.h>
int main()
{
    int i,j,a[100][100],s=0,m,n;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
       for(i=0;i<n;i++)
    {
         for(j=0;j<m;j++)
        {
           s=s+a[i][j];
        }
    }
        
    printf("%d",s);
}
