#include <stdio.h>
#include <string.h>

int string_length(char s[]);


int main()
{
    char string[] = "hey";
    int len = strlen(string);
    
    printf("built in len: %d\n my func: %d\n", len, string_length(string));

}

int string_length(char s[])
{
    int i = 0;

    while (s[i] != '\0') {
        ++i;
    }
    return i;
}



