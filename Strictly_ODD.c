#include<stdio.h>
int main()
{
    int n,a[100],i,j,s,k,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        if(i%2!=0)
        {
            s++;
            int c=0;
            if(a[i]%2!=0)
            {
                c++;
            }
        }
        else
        {
            k=0;
            if(a[i]%2!=0)
            {
                k++;
            }
        }
    }
    if(s==c && k==0)
    {
        printf("True");
    }
    else if(k>0)
    {
        printf("False");
    }
}