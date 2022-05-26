#include "main.h"
#include <stdio.h>

/**
* prints times table based on n
*
*@n: The int to print
* Return: Always 0.
*/
void print_times_table(int n)
{
if (n > 0 && n <= 15)
{
int k, j, l;
for (k = 0; k <= n; k++)
{
for (j = 0; j <= n; j++)
{
if (j < n)
{
l = k * j;
if (l < 10)
{
putchar(' ');
putchar(l + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
else if(l >= 10 && l <= 99)
{
putchar(l / 10 + '0');
putchar(l % 10 + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
else if(l > 99)
{
putchar('\b');
putchar(l / 100 + '0');
putchar((l - 100) / 10 + '0');
putchar(l % 10 + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
}
else if (j = n)
{
l = k *j;
if (l < 10)
{
putchar(' ');
putchar(l + '0');
}
else if(l >= 10 && l <= 99)
{
putchar(l / 10 + '0');
putchar(l % 10 + '0');
}
else if(l>99)
{
putchar('\b');
putchar(l / 100 + '0');
putchar((l - 100) / 10 + '0');
putchar(l % 10 + '0');
}
}
}
putchar('\n');
}
}
}
