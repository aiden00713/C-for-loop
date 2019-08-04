#include <Stdio.h>
//¥k¤U¤T¨¤§Î 
int main(void)
{
	int n,i=0,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=n;k>i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
