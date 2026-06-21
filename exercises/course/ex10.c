#include <stdio.h>

/* definicao de um triangulo: a soma de quaisquer dois lados eh maior que o terceiro lado
Equilatero -> 3 lados iguais
Isosceles -> 2 lados iguais
Escaleno -> 3 lados diferentes
*/

int main(void)
{
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a + b > c && a + c > b && b + c > a)	
	{
		
	}
	else
	{
		printf("As medidas nao formam um triangulo \n");
		return 1;
	}

	if (a == b && a == c)
	{
		printf("Eh um triangulo equilatero \n");
	}
	
	if (a == b || a == c || b == c)
	{
		printf("Eh um triangulo isosceles \n");
	}

	if (a != b && a != c && c != b)
	{
		printf("Eh um triangulo escaleno \n");
	}

	return 0;
}
