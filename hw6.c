#include <stdio.h>

int main(void)
{
	
	int i, temp;
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	printf("\n\nafter swap\n");

	
	
	for (i = 0; i < 6; i++)
	{
		int* ptr1 = &arr1[i];
		
		*ptr1 = arr2[i];
		
		ptr1++;
	}
	
	for (i = 0; i < 6; i++)
	{
		int* ptr2 = &arr2[i];

		*ptr2 = arr1[i];

		ptr2++;
	}

	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	return 0;
	

}