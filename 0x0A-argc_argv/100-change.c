#include <stdlib.h>
#include <stdio.h>

/**
 * main - counts the number of coins
 * to give as change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int count = 0, money = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		return (0);
	}

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else
			money -= 1;
		count += 1;
	}
	printf("%d\n", count);
	return (0);
}
