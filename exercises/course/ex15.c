#include <stdio.h>
#include <math.h>

// digite um valor N e mostre o valor ao quadrado PAR no intervalo de 1 a N 
// use -lm flag to compile this code
int main(void)
{
	double n;
	scanf("%lf", &n);

	for (int i = 0; i < (int)n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d | %.2lf \n", i, pow(i, 2.0));
		}
	}

	return 0;
}
