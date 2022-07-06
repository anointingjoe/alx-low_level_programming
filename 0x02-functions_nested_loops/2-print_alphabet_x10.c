#include "main.h"
/**
 * print_alphabet_x10 - function to print abc
 *
 * Return: 0
 **/

void print_alphabet_x10(void);
{
char k;
char l;

for (l = 0; l <= 10; l++)
{
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
}
_putchar('\n');
}
}
