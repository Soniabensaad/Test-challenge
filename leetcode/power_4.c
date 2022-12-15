#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool isPowerOfFour(int n){

if (n < 0)
{
    return (false);

}
if (n == 1)
{
    return (true);
}
while (n > 0)
{
    if ((n % 4) == 0)
    {
        n = (n /4);
    }
    else
    {
        return (false);
    }
    if (n == 1)
    {
        return (true);
    }
}
return (false);
}
