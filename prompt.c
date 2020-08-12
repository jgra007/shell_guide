#include <stdio.h>
<<<<<<< HEAD
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * readline - read the line typed on the prompt
 * Return: typed line
 */
int main()
{
	char *buf;
	char *temporal = NULL;
	char **split_string = malloc(sizeof(char *) * 24);
	char *pattern = " \n";
	size_t bufsize = 1024; /* size of the buf in bytes */
	int i = 0, num;

        /* get string typed by user */
	num = getline(&buf, &bufsize, stdin);
	if (num == EOF)
	{
		return (0);
	}

        /* show the string typed */
	printf("$");

	/* split string */
	temporal = strtok(buf, pattern);
	while (temporal != NULL)
	{
		split_string[i] = temporal;
		printf("temporal = %s\n", temporal);
		temporal = strtok(NULL, pattern);
		i++;
	}
	return (*split_string);
=======
#include <stdlib.h>

int input(char *s, int length);

int main(void)
{
	char *buffer;
	size_t bufsize = 32;


	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("$ ");
	getline(&buffer, &bufsize, stdin);
	printf("%s\n", buffer);

	return (0);
>>>>>>> 4df1f1ee09b562bdff03f6db6481b9e85deb8888
}
