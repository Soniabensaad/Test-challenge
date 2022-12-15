#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool isIsomorphic(char * s, char * t)
{
    int sa[256] = {0};
    int ta[256] = {0};
    int i = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(sa[s[i]] != ta[t[i]])
        {
            return (false);
        }
        sa[s[i]] = i+1;
        ta[t[i]] = i+1;
    }
    return (t[i] == '\0');
}