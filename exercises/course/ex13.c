#include <stdio.h>

// somar todos os numeros impares entre 1 a 1000

int main(void)
{
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		if (i % 2 == 0)
		{}
		else 
		{
			sum += i;
		}
	}

	printf("Total: %d \n", sum);

	return 0;
}

