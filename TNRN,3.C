#include<stdio.h>
void brinda()
{
	int celsius;
    float fahrenheit ;
    printf("the temperature in celsius:");
    scanf("%d",&celsius);
    fahrenheit = (1.8*celsius)+32;
    printf("the temperature in fahrenheit:%f",fahrenheit);
   
    
}
int main()
{
	brinda();
}

/*OUTPUT:
the temperature in celsius:123
the temperature in fahrenheit:253.399994
*/