#include<stdio.h>
main()
{
	int a[2][3],b[2][3],c[2][3],i,j,max,min;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}	
	}*/
	
	max = a[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	
	printf("\nMax number = %d",max);
	
	
	min = a[0][0];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min > a[i][j])
			{
				min = a[i][j];
			}
		}
	}
	printf("\nminimum = %d",min);
}