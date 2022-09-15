#include "main.h"

/**
* more_numbers - prints numbers between 0 to 14
* 10 times.
* Return: no return.
*/
void more_numbers(void)
{
int sh, bh;
for (sh = 0; sh < 10; sh++)
{
for (bh = 0; bh < 15; bh++)
{
if (bh >= 10)
_putchar((bh / 10) + 48);
_putchar((bh % 10) + 48);
}
_putchar(\n);
}
}
