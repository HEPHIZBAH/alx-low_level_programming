#include "main.h"

/**
*_isupper - checks if parameter is an uppercase character.
* main - check the code.
*@c: input charcter.
* Return: Always 0.
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
