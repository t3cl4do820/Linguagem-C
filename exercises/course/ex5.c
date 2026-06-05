#include <stdio.h>
#include <math.h>
// calcular IMC
// to compile this use -lm for add a math.h header
int main(void)
{

	float peso, altura;
	printf("Digite seu peso depois sua altura:");
	scanf("%f", &peso);	
	scanf("%f", &altura);
	printf("Seu IMC eh: %.2f \n", peso/pow(altura, 2));

	return 0;
}
