#include <stdio.h>

struct city
{
	char name[20];
	char country[20];
	int population;
};

int main(void)
{
	struct city arr[3];
	int i;
	printf("Input three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("name > ");
		scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("country > ");
		scanf_s("%s", arr[i].country, sizeof(arr[i].country));
		printf("polpulation > ");
		scanf_s("%d", &arr[i].population);
	}
	printf("Printing the three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i, arr[i].name, arr[i].country, arr[i].population);
		
	}
	return 0;
}