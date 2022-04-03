#include <stdlib.h>
#include <stdio.h>
/**
 * main - the program starts here
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1] * argv[2]));
	return (0);
}
