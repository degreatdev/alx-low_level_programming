#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a string, followed by a new line, to stdout.
 *
 * @str: pointer
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
