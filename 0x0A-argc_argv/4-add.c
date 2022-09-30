#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - adds positive numbers
 * passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 *
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
