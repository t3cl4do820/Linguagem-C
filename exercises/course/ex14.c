#include <stdio.h>

// imprimir na tela todos os multiplos de 7 entre 1 a 9999

int main(void)
{

	for (int i = 1; i < 9999; i++)
	{
		if (i % 7 == 0)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
	return 0;
}
