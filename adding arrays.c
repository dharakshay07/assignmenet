#include<stdio.h>
main()
{
	int a[5],b[5],i,sum[5];
	printf("Enter array elements of A : ");
	for(i=0;i<5;i++)
	{
		printf("\nEnter A [%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter array elements of B : ");
	for(i=0;i<5;i++)
	{
		printf("\nEnter B [%d] = ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		sum[i] = a[i] + b[i];
	}
	printf("Addition of array elements  :");
	for(i=0;i<5;i++)
	{
		printf("\nSum[%d] = %d",i,sum[i]);
	}
	
}
