#include<stdio.h>
int multiple(int,int);
int main()
{
	int a,n,b;
	printf("enter the value of a and n");
	scanf("%d%d",&a,&n);
	b=multiple(a,n);
	return 0;
	
}
int multiple(int a,int n)
{
	int i,b=1;
	for(i=1;i<=n;i++)
	{b=i*a;
	printf("%d * %d = %d \n", a, i, a * i);}
	return b;
}
