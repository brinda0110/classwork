#include<stdio.h>

void brinda()
{
	int dollar ,rupees ;
	printf("Enter value in dollar:");
	scanf("%d",&dollar);
	rupees =dollar*85;
	printf("rupees:%d",rupees);
	
}



int main()
{
  brinda();	
}

/*output:
Enter value in dollar:10
rupees:850*/