#include "main.h"

 /**
  * _palindrome - Checks whether a string is a palindrome
   * @s: string
   * Return: 1 if a palindrome, otherwise 0
   */

 int is_palindrome(char *s)
 {
         int end = last_index(s);
         return (check(s, 0, end -1, end %2));
 }
