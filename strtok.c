#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    char *token;
    const char *delim = " ";
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    token = strtok(s, delim);
    while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, delim);
    }
  
    return 0;
}