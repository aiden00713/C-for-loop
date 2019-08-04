#include <Stdio.h>
//左上三角形 
int main(void){
	int n,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)  //行 
	{
		for(j=0;j<=i;j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
