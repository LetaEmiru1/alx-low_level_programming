#include <stdio.h>

/**
 *main- prints the program name
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
