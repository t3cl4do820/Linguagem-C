#include <stdio.h>
#include <string.h>

int main(void)
{

	char passwd[] = "passwd";
	char user_passwd[10];
	

	while (1)
	{
		printf("Enter the passwd (the passwd dont have spaces and max size is 10): ");

		scanf("%s", user_passwd);
		if (strcmp(passwd, user_passwd) == 0)
		{
			printf("The passwd is correct! \n");
			break;
		}
		else
		{
			printf("The passwd is incorrect! \n");
		}
	}


	return 0;
}
