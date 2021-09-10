//C Program to display Hollow full pyramid

#include <stdio.h>


int main()
{
   int n,i,j;
   
   printf("Enter the number or rows : ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=(n-i);j++)
	  { 
	    printf(" ");
      }
      if(i==1 || i==n)
	  { 
        for(j=1;j<=i;j++)
		{
           printf("* "); 
        }
      } 
	  else 
	  {
        printf("*"); 
        for(j=1; j<=2*i-3; j++)
		{ 
        	printf(" ");
        }
        	printf("*");
     }
      printf("\n");
   }
   return 0;
}
