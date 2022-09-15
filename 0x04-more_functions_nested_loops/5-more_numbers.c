#include "main.h"

/**
* more_numbers - prints numbers between 0 to 14
* 10 times.
* Return: no return.
*/
void more_numbers(void)
{
int sh, bh;
for (sh = 48; sh <= 58; sh++)
{
for (bh = 48; bh < 64; bh++)
{
_putchar(bh++);
}
_putchar(\n);
}
}
