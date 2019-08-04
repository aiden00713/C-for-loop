#include <Stdio.h>
int main(void)
{
	int n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
