#include<stdio.h>

void brinda()
{
	int maths,eng,phys,total;
	float percentage;
	printf("maths:");
	scanf("%d",&maths);
	printf("eng:");
	scanf("%d",&eng);
    printf("phys:");
	scanf("%d",&phys);
	total:maths+eng+phys;
	printf("total:%d",total);
	percentage=total/3;
	printf("percentage:%f",percentage);
	
}
int main()
{
	brinda();
}