#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int lower_c;
int count;


count = 0;
while (count < 10)
{
for (lower_c = 'a' ; lower_c <= 'z'; lower_c++)
{
_putchar(lower_c);
}

count++;
_putchar('\n');
}


}
