#include<stdio.h>

void brinda()
{
	int feet ,inches ;
	printf("feet:");
	scanf("%d",&feet);
	inches =feet*12;
	printf("inches:%d",inches);
	
}



int main()
{
  brinda();	
}

/*OUTPUT:
feet:13
inches:156
*/