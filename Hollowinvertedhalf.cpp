//C Program to display Hollow inverted Half Pyramid

#include<stdio.h>

int main()
{
	int n,i,j;
	
	printf("Enter the number or rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if((j==n) || (i==1) ||(i==j))
			{
				printf("*");
			}
			
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
