#include<stdio.h>
main()
{
	char str[20],i,j;
	
	printf("Enter string = ");
	gets(str);
	i=0,j=0;
	do
	{
		i++;
	}while(str[i] != '\0');
	printf("Length of string = %d",i);
}