#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2==0)
        {
          flag=1;
        }
    
    else if(a[i]%2==0 && i%2!=0)
    {
        flag=0;
        break;
    }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}