#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 after printing the function
 */
int main(void)
{
int ch = 0;
int com = 44;
int sp = 32;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch < 57)
{
putchar(com);
putchar(sp);
}
}
putchar('\n');
return (0);
}
