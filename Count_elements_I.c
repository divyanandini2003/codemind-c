#include<stdio.h>
int main()
{
    int n,m,j,f=0,i,c=0;
    scanf("%d%d",&n,&m);
    int ar1[n],ar2[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(ar1[i]==ar2[j])
            {
                c+=1;
                ar2[j]=-1;
            }
        }
        if(c>0)
        {
            f++;
        }
        
    }
    printf("%d",f);
}