#include<stdio.h>

int main()
{
	int a,b=5;
	
	{
	printf("value of a:");}
	scanf("%d",&a);
	if(a%b==0)
	{
		printf("number is divisible by 5");
	}
	else 
    {
		printf("number is not divisible by 5");
     }
}