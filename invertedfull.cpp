//C Program to display Hollow Inverted Pyramid

#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=n;j>=n-i-1;j--)
		{
			printf(" ");
		}
		for(j=n;j>=i+1;j--)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
