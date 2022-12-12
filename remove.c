#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int removeElement(int* nums, int numsSize, int val)
{

int i, fin, c;
for(i = 0, fin= numsSize -1, c = 0; i<=fin;)
{
    if(nums[i] != val)
    {
        i++;
        c++;
    }
    else
    {
        if(nums[fin] == val)
        {
            fin--;
            
        }
        else
        {
            nums[i] = nums[fin];
            i++;
            fin--;
            c++;
        }
    }
}


return (c);
}
