//mirror of triangular pattern

#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	 
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=n;j++)
		printf("  ");
		
		for(k=1;k<=i;k++)
		printf("*\n");
	}
		printf("/n");
}
