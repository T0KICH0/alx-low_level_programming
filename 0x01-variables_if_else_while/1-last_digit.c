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
int lastdigit;
lastdigit = n % 10;
if (lastdigit > 5)
{
printf("%d is greater than 5\n", lastdigit);
}
else if (lastdigit > 6)
{
printf("Last digit of %d is greater than 6 and not 0\n", lastdigit);
}
while (lastdigit = 0)
{
printf("Last digit of %d is 0 and is 0\n", lastdigit);
}
return (0);
}
