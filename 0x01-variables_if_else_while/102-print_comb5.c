#include <stdio.h>
/**
* main - Prints combination of numbers
*
* Return: Always (Success)
*/
int main(void)
{
int c, i, k, o;
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
for (k = '0'; k <= '9'; k++)
{
for (o = '0'; o <= '9'; o++)
{
if (i < o && c==k)
{
putchar(c);
putchar(i);
putchar(' ');
putchar(k);
putchar(o);
if (!(c == '9' && i == '8' && k == '9' && o == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

