#include<stdio.h>

int main()
{
	int i=1;
	for(;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
