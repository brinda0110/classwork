#include<stdio.h>
int main()
{
	int i,n ,count=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	printf("%d ",i);
	count=i;
	}
	printf("\ntotal digit:%d", count);
}
/*output:enter value of n:15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
total digit:15 */