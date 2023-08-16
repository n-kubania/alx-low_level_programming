#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints opcodes of its main function
 * @argc: Number of command arguments
 * @argv: An Array of strings that contains command arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char byteArray[sizeof(void *)];

	/* Check number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* Convert argument to integer */
	int numBytes = atoi(argv[1]);

    /* Check negative bytes */
	if (numBytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

    /* Address of main function */
	void *ptrMain = &main;

	printf("Address of main function: %p\n", ptrMain);

    /* Convert main address to byte array */
	unsigned char *byteArrayPtr = (unsigned char *)&main;

    /* Print opcode */
	for (i = 0; i < sizeof(void *); i++)
	{
	printf("%02x", byteArrayPtr[i]);
	}
	printf("\n");

	return (0);
}
