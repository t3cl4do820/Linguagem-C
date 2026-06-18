#include <stdio.h>

// digite um char e retorne dizendo se eh vogal ou consoante
int main(void)
{
	char c; scanf("%c", &c);

	char vogais[] = {'a', 'e', 'i', 'o', 'u'};

	for (int i = 0; i < sizeof(vogais); i++)
	{		
		if (c == vogais[i])
		{
			printf("Eh uma vogal \n");
			return 0;
		}
	}
	printf("nao eh uma vogal \n");
	return 0;
}
