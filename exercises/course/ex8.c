#include <stdio.h>

int bissexto = 0; // false

typedef enum meses 
{
	janeiro = 1,
	fevereiro,
	marco,
	abril,
	maio,
	junho,
	julho,
	agosto,
	setembro,
	outubro,
	novembro,
	dezembro,
}meses;

int main(void)
{
	int num_mes; scanf("%d", &num_mes);
	if (num_mes > 12 || num_mes < 0)
	{
		printf("Digite um numero valido (1-12) \n");
		return 1;
	}

	int meses31_d[] = {janeiro, marco, maio, julho, agosto, outubro, dezembro};

	int meses30_d[] = {abril, junho, setembro, novembro};

	int mes_bissexto = fevereiro;

	for (int i = 0; i < sizeof(meses31_d) / sizeof(meses31_d[0]); i++)
	{
		if (num_mes == meses31_d[i])
		{
			printf("Seu mes tem 31 dias \n");
			return 0;
		}
	}

	for (int i = 0; i < sizeof(meses30_d) / sizeof(meses30_d[0]); i++)
	{
		if (num_mes == meses30_d[i])
		{
			printf("Seu mes tem 30 dias \n");
			return 0;
		}
	}

	if (bissexto == 0)
	{
		printf("Seu mes tem 28 dias\n");
	}
	if (bissexto == 1)
	{
		printf("Seu mes tem 29 dias\n");	
	}

	return 0;
}
