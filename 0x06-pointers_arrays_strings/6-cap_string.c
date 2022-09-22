#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @s: input string.
* Return: the pointer to dest.
*/

char *cap_string(char *s)
{
int joy = 0, i;
int love[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(s + joy) >= 97 && *(s + joy) <= 122)
*(s + joy) = *(s + joy) - 32;
joy++;
while (*(s + joy) != '\0')
{
for (i = 0; i < 13; i++)
{
if (*(s + joy) == love[i])
{
if ((*(s + (joy + 1)) >= 97) && (*(s + (joy + 1)) <= 122))
*(s + (joy + 1)) = *(s + (joy + 1)) - 32;
break;
}
}
joy++;
}
return (s);
}
