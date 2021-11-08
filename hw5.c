#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int even(int arr1);
int odd(int arr1);

int even(int arr1)
{
	if (arr1 % 2 == 0)
		printf("%d ", arr1);
	return 0;

}
int odd(int arr1)
{
	if (arr1 % 2 == 1)
		printf("%d ", arr1);
	return 0;
}

int main(void)
{
	int arr1[5] = { 0 };
	int i;
	printf("5개의 정수를 입력하세요: ");
	
	scanf_s("%d %d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3], &arr1[4]);
	

	printf("\n홀수 출력: ");

	for (i = 0; i < 5; i++)
	{
		odd(arr1[i]);
	}
	printf("\n짝수 출력: ");

	for (i = 0; i < 5; i++)
	{
		even(arr1[i]);
	}
}