include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
int i;
int length = _strlen(str);
if (length % 2 != 0)
i = (length + 1) / 2;
else
i = (length / 2);
while (i < length)
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
