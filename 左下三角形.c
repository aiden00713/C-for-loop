#include <Stdio.h>
//���U�T���� 
int main(void){
	int n,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)  //�� 
	{
		for(j=n;j>i;j--) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
} 
