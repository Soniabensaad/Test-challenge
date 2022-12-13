#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define isPalindrome main
bool isPalindrome(int x)
{
    long int pa = 0;
    int n = x;
    if (x < 0)
    {
        return (false);
    }
    while (x)
    {
        pa = (pa * 10) + (x % 10);
        x /= 10;
    }
    return (pa == n);


}