#include <stdio.h> 

// ler um nuemro e ver se eh divisivel por 2, 3 ou 5
int main(void)
{
	int num; scanf("%d", &num);
	
	if (num %2 == 0)
		printf("o numero %d eh divisivel por 2 \n", num);

	if (num %3 == 0)
		printf("o numero %d eh divisivel por 3 \n", num);

	if (num %5 == 0)
		printf("o numero %d eh divisivel por 5 \n", num);
	return 0;
}
