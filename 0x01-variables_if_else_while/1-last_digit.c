#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
* main -> assign a random number to the variable n each time it is executed
* and print whether the number stored in the variable n is positive or negative
* result : Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("greater than 5");
}
if (n == 0)
{
printf("0");
}
if (n < 6 && != 0)
{
printf("less than 6 not 0");
}
printf("\n");

return (0);
}

