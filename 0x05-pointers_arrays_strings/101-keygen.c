#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
    srand(time(NULL));
int i;
for (i=0; i<=RAND_MAX; i++)
{
printf("%d", rand());
}
}
