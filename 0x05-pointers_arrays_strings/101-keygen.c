#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10
/**
 * main - generates random password
 *
 * Return: Always 0.
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {0};
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = 'A' + rand() % 26;
	}

	printf("Generated Password: %s\n", password);
	return (0);
}
