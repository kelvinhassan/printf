#include "main.h"
/**
 * print_Rot13 - print string in rot13
 * @arg: string to print size
 * Return: number of chars printed
 */
int print_rot13(va_list arg);
{
unsigned int i, j;
char *str;
int count = 0;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

str = va_arg(list, char*);
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alphabet[j] != '\0'; j++)
{
if (str[i] == alphabet[j])
{
_putchar(rot13[j]);
count++;
break;
}
}
if (!alphabet[j])
{
_putchar(str[i]);
count++;
}
}
return (count);
}
