#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char lower_c;

for (lower_c = 'a'; lower_c <= 'z'; lower_c++)
{
_putchar(lower_c);
}

_putchar('\n');

}
