#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints random number if it is positive or negative
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
n=0; 
if (n>0)
printf ("positive\n");
else if (n<0)
printf ("negative\n");
	return (0);
}
