
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define singleNumber main

  int singleNumber(int* nums, int numsSize)
  {

    int except = nums[0];
    for (int i=1; i <numsSize ;i++)
    {
         (except ^= nums[i]);
            
    }
    return (except);
  }

  


