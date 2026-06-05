#include <stdio.h> 


// real pra dolar e dolar pra real

int main(void)
{
	float dolar_value = 5.30f;

	int num;
	printf("(1)dolar pra real \n(2)real pra dolar:");
	scanf("%d", &num);

	float real, dolar;

	float convert = 0.0f;

	if (num != 1 && num != 2)
		printf("enter 1 or 2 values... \n");

	if (num == 1)
	{
		scanf("%f", &dolar);
		printf("%.2f \n", dolar_value*dolar);
	} 
	else if (num == 2)
	{
		scanf("%f", &real);
		printf("%.2f \n", real/dolar_value);
	}

	return 0;
}
