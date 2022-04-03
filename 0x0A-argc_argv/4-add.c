#include <stdlib.h>
#include <stdio.h>
/**
 * notInteger - checks for integers
 * @s: argument
 * Return: Always 0 (Integer) or 1 (Not Integer)
 */
int notInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (notInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}

	printf("%i\n", sum);
	return (0);
}
