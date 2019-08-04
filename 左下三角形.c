#include <Stdio.h>
int main(void)
{
	int n=0,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
		for(j=n;j>i;j--) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
