#include <stdio.h>

// fibonacci -> comeca com os numeros 0 e 1, o proximo termo eh a soma dos dois ultimos...
// por exemplo: 0 + 1 = 1 ent a sequencia fica 0 1 1, agora a soma eh 1 + 1 que eh igual a 2
// 0 1 1 2 -> 1 + 2 = 3....

int fibonacci(int valor);

int main(void)
{
	int valor;
	printf("Digite o valor que deseja calcular: ");
	scanf("%d", &valor);

	printf("%d \n", fibonacci(valor));

	return 0;
}

int fibonacci(int valor)
{
	if (valor == 1) return 0; // primeiro valor da sequencia
	if (valor == 2) return 1; // segundo valor da sequencia
	return fibonacci(valor - 1) + fibonacci(valor - 2);
}

