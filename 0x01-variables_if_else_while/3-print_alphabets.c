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
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
char CH = 'A';
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
putchar('\n')
return (0);
}
