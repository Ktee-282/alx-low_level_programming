#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to the variable n at each execution
 * Return: 0
 */
 int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if(n > 0)
{
prinf("The number is positive\n");
}
else if(n < 0)
{
printf("The number is negative\n");
}
else
{
printf("The number is zero\n");
}

return (0);
}
