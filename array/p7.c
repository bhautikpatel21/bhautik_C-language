#include<stdio.h>
int main()
{
	int a[5][5],i,j,b[5][5],c[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter val a[%d][%d]",i,j);
			scanf("  %d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter val b[%d][%d]",i,j);
			scanf("  %d",&b[i][j]);
		}

	}
	printf("matrixa\t\tmatrixb\t\tsum");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			printf(" %d",b[i][j]);
		}
			printf("\t\t");
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf(" %d",c[i][j]);
		}
	}
	return 0;
}