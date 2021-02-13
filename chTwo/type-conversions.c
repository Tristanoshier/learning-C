#include <stdio.h>
#include <ctype.h>
#include <math.h>

/* lower: convert c to lower case; ASCII only */
int lower(int c);
int lowerLibrary(char c);

int main() 
{
    char sample = 'T';
    int n = 4;

    printf("%d\n", lower(sample));
    printf("%d\n", lowerLibrary(sample));
    printf("%f\n", sqrt((double)n));
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int lowerLibrary(char c)
{
    return tolower(c);
}

