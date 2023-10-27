#include <stdio.h>
#include <stdlib.h>
/**
 *main- prints multiplication
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}
