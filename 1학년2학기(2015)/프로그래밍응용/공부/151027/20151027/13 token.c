#include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";
char *token;
char *��ū[10] = { NULL };
int i = 0;

int main(void)
{
	token = strtok(s, seps);

	while (token != NULL)
	{
		printf("��ū: %s\n", token);
		��ū[i] = token;
		i++;
		token = strtok(NULL, seps);
	}

	for (i = 0; i < 8; i++)
		printf("%s\n", ��ū[i]);
	
	return 0;
}