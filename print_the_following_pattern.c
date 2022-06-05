#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,z=1,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=z;k>=1;k--)
        {
            printf("%d",abs(k-i));
        }
        z+=2;
        printf("
");
    }
}