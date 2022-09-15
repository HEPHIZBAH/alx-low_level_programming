#include "main.h"

/**
* main - check the code.
*
* Return: Always 0.
*/

int main(void)
{
char c;
if (c >= 65 && c <= 90)
{
_putchar("%c: %d\n", c, _isupper(c));
return (1);
}
else
{
_putchar("%c: %d\n", c, _isupper(c));
return (0);
}
}
