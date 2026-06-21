#include <stdio.h>

void aritmetica(int array[], size_t size_array);

void ponderada(int array[], size_t size_array, int pesos_array[]);

int main(void)
{

	int array[] = {5, 5, 5, 5};
	size_t size_array = sizeof(array) / sizeof(array[0]);

	aritmetica(array, size_array);

	int pesos_array[] = {3, 4, 5, 6};

	ponderada(array, size_array, pesos_array);

	return 0;
}

void aritmetica(int array[], size_t size_array)
{
	int sum = 0;
	for (int i = 0; i < size_array; i++)
	{
		sum += array[i];
	}
	printf("Result: %zu\n", sum/size_array);
}

void ponderada(int array[], size_t size_array, int pesos_array[])
{
	int sum = 0;
	int sum_pesos = 0;
	for (int i = 0; i < size_array; i++)
	{
		sum += array[i] * pesos_array[i];
		sum_pesos += pesos_array[i];
	}
	printf("Result: %d\n", sum/sum_pesos);
}
