#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
char * restoreString(char * s, int* indices, int indicesSize){
char *saye =  malloc(sizeof(char)*(indicesSize +1));
int i;
for (i= 0; i<=indicesSize; i++)
{
    if(i == indicesSize)
    {
        saye[i] = '\0';
    }
    else
    {
         saye[indices[i]] = s[i];
    }

}
return(saye);
}