#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints random number if it is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = 0;
if (n > 0)
printf("n positive\n");
else if (n < 0)
printf("n negative\n");
else if (n == 0)
printf("n 0\n");
return (0);
}
