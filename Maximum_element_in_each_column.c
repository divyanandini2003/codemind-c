#include<stdio.h>
int main()
{
    int i,j,a[100][100],c,m,n;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]>c)
            {
                c=a[i][j];
            }
        }
        printf("%d
",c);
    }
}