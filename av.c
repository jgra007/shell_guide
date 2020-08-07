#include <stdio.h>
/**
 * main - print the all the arguments
 * @av: array of strings
 * @ac: size of av
 * Return: 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	int y, x = 0;

	while (av[x])
	{
	x++;
	}

	for(y = 0; y < x; y++)
	{
		printf("%s\n", av[y]);
	}
	return (0);
}
