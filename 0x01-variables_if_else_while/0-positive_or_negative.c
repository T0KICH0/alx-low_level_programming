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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%s is positive\n", n);
}
else if (n < 0)
{
printf("%s is negative\n", n);
}
else
{
printf("%s is zero\n", n);
}
return (0);
}
