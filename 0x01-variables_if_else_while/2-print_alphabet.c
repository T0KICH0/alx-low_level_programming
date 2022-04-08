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
putchar();
}
return (0);
}
