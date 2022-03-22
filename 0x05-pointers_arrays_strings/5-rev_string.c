#include "main.h"
/**
 * rev_string - prints in reverse
 * @s: the first argument
 */
void rev_string(char *s)
{
	int ln = 0;
	int i = 0;
	int j, k;
	char temp;
	temp = (char) s;

	while (s[i] != '\0')
	{
		i++;
		ln++;
	}
	k = ln - 1;
	for (j = k; j >= 0; j--)
	{
		s[j] = temp[k - j];
	}
}
