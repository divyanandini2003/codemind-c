#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,z=1;
    scanf("%d",&n);
    for(i=1-n;i<n;i++)
    {
        for(j=1-n;j<n;j++)
        {
            if(abs(i)>abs(j))
            {
                printf("%d ",abs(i)+1);
            }
            else
            {
                printf("%d ",abs(j)+1);
            }
        }
        printf("
");
    }
    return 0;
}