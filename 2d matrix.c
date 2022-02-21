#include<stdio.h>
main()
{
	int rs,cs,i,j;
	printf("enter the rows and colums");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs];
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			printf("\na[%d][%d] ===> %d",i,j,a[i][j]);
		}
}
}
