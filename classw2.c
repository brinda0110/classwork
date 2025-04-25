#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		printf("%d ",i);
		sum =sum+i;
	} printf("\ntotal sum:%d",sum);
	}
/* output:enter value of n:10
0 2 4 6 8 10
total sum:30 */