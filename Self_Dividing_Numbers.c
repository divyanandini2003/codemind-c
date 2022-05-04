#include<stdio.h>
int main()
{
    int n,m,x,i,c=0,k=0,d,p;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        x=i;
        c=0,k=0;
        while(x)
        {
            d=x%10;
            if(d!=0 && i%d==0)
            {
                k++;
            }
            x=x/10;
            c++;
        }
        if(c==k)
        {
            printf("%d ",i);
        }
    }
}