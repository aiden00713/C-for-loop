#include <stdio.h>
int main(void)
{
	int n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for (j =1;j<=n-i;j++)
  		{
   			printf(" ");
  		}
  		
  		for (k=1;k<=2*i-1;k++)
  		{
   			printf("*");
  		}
  		
       	printf("\n");
 	}
 	
	for (i=n+1;i<n*2;i++)
 	{
  		for (j=1; j<=i-n;j++)
  		{
   			printf(" ");
  		}
  		
  		for (k=1;k<=(n*2-i)*2-1;k++)
  		{
   			printf("*");
  		}
  		
  		printf("\n");
 	}

 	return 0;
}
