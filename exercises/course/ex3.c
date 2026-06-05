#include <stdio.h> 

// ler um numero e ver se eh divisivel por 2, 3 e 6
int main(void)
{
	int num; scanf("%d", &num);

	if (num %2 == 0)
		printf("eh por 2 \n");
	if (num %3 == 0)
		printf("eh por 3 \n");
	if (num %6 == 0)
		printf("eh por 6 \n");

	return 0;
}
