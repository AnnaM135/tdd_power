#include <stdio.h>

double power(int x, int n)
{
    double result = 1;

    int exp = n;
    if (n < 0) 
        exp = -n;

    for (int i = 0; i < exp; i++)
    {
        result *= x;
    }

    if (n < 0)
        return 1.0 / result;

    return result;
}