#include <stdio.h>

// digite um char e retorne dizendo se eh vogal ou consoante


int main(void)
{
	char c; scanf("%c", &c);

	switch(c)
	{
		case 'a':
			printf("Eh uma vogal\n");
			break;
		case 'e':
			printf("Eh uma vogal\n");
			break;
		case 'i':
			printf("Eh uma vogal\n");
			break;
		case 'o':
			printf("Eh uma vogal\n");
			break;
		case 'u':
			printf("Eh uma vogal\n");
			break;
		default:
			printf("Eh uma consoante\n");
	}

	
	return 0;
}
