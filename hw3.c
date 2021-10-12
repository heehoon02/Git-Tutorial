#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int num, i, count=0;
	printf("please enter a number: ");
	scanf("%d", &num);

	for (i = 2;i <= num;i++)
	{
		if (num % i == 0) count++;
	}

	if (count == 1) printf("It is a prime number.");
	else printf("It is not a prime number.");

	return 0;
}