#include <Stdio.h>
//左下三角形 
int main(void){
	int n,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)  //行 
	{
		for(j=n;j>i;j--) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
