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
int n, b;
srand(time(0));
n = rand() - RAND_MAX / 2;
b = n % 10;
if (b > 5)
{
printf("%d is greater than 5\n", b);
}
else if (b > 6)
{
printf("Last digit of %d is greater than 6 and not 0\n", b);
}
if (b == 0)
{
printf("Last digit of %d is 0 and is 0\n", b);
}
return (0);
}
