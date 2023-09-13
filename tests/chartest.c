#include <stdio.h>
#include "main.h"
/**
 * nmain - show printf values against my own porintf
 * no arguments,
 * Return: 0 on success, non0-zero otherwise
 */
int main(void)
{
	int len, len2;
	char c, s[];

	len = printf("Let's try to print a simple sentence");
	len2 = _printf("Let's try to print a simple sentence");
	printf("\n The standard printf return %d while your printf return %d\n", len, len2);
	c = 'y';
	len = printf("Let's see how it prints a character %c now", c);
	len2 = _printf("Let's see how it prints a character %c now", c);
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	c = NULL;
	len = printf("Let's try to print a null character %c now", c);
	len2 = _printf("Let's try to print a null character %c now", c);
	printf("\nstadabnrd printf returns %d while yours returns %d\n", len, len2);
	len = printf("Let's see what happens when the character %v is not a specifier");
	len2 = _printf("Let's see what happens when the character %v is not a specifier");
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	c = 68;
	len = printf("Let's see what happens when the character %c contains n int", c);
	len2 = _printf("Let's see what happens when the character %c contains n int", c);
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	len = printf("Let's see what happens when the %% percent is followed by a percent");
	len2 = _printf("Let's see what happens when the %% percent is followed by a percent");
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
        len = printf("Let's see what happens when it ends with a percent %");
	len2 = _printf("Let's see what happens when it ends with a percent %");
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	len = printf("Let's see what happens when the % percent is in the middle");
	len2 = _printf("Let's see what happens when the % percent is in the middle");
	printf("\n our printf returns %d while the standrd returns %d now", len2, len);
	s[] = "A simple string";
	len = printf("Printing a string %s with chars", s);
	len2 = _printf("Printing a string %s with chars", s);
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	c = 'r';
	len = printf("Printing a stribng %s with a char %c", s, c );
	len2 =  _printf("Printing a stribng %s with a char %c", s, c );
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	len = printf("Printing a % percent alone");
	len2 = printf("Printing a % percent alone");
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	len = printf("Ending with a string %s");
	len2 = _printf("Ending with a string %s");
	printf("\n The standard printf returns %d while your printf returns %d\n", len, len2);
	s[] = NULL;
	len = printf("When a null string is passed %s here", s);
	len2 = _printf("When a null string is passed %s here", s);
        printf("\n The std printf returns %d and yours returns %d\n", len, len2);
	len = printf("");
	len2 = _printf("");
	printf("\nFor an empyty string, std printf returns %d while yours gives %d\n", len, len2);
	len = printf(NULL);
	len2 = _printf(NULL);
	printf("\nFor a NULL input, std printf returns %d while yours gives %d\n", len, len2);
	return (0);
}
