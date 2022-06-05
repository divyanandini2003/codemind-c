#include<stdio.h>
int main()
{
    int i,n,f=0,s=1,next;
    scanf("%d",&n);
    printf("%d %d ",f,s);
    for(i=2;i<n;i++)
    {
        next=f+s;
        f=s;
        s=next;
        printf("%d ",next);
    }
}