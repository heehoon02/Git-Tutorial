#include <stdio.h>

int main(void)
{
	
	float num1;
	double num2;
	
	printf("please enter kilometers : ");
	scanf("%f", &num1);
	num2 = num1 / 1.609;
	printf("%f km is equal to %f miles. \n", num1, num2);
	return 0;
}