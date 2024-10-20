// Test for random variable
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (void)
{
    int random_nr = 0;
    srand ((unsigned) time (NULL));
    random_nr = rand ();
    if (random_nr < RAND_MAX / 2)
        printf ("The random number is in the lower half! \n");
    else
        printf ("The random number is in the upper half! \n");
    
    return 0;
}
