#include<stdio.h>
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=(n1*n2);i++)
    {
        if(i%n1==0 && i%n2==0)
        break;
    }
    printf("%d",i);
}