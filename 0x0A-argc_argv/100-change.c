#include "main.h"
 #include <stdio.h>
#include <stdlib.h>

 /**
   * main - A program that prints the minimum number of coins to make change for an amount of money 
   * @argc: Number of command line arguements
   * @argv: An array of string containing number of arguemens
   * Return: 0 success
   */
int main(int argc, char *argv[])
{
    int coins[] = {25, 10, 5, 2, 1};
    int count, cents = 0, money = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    money = atoi(argv[1]);

    for (count = 0; count < 5; count++)
    {
        if (money >= coins[count])
        {
            cents += money / coins[count];
            money %= coins[count];
            break;
        }
    }

    printf("%d\n", cents);
    return 0;
}
