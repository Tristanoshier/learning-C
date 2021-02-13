#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c);
/* strcat: concatenate t to end of s; s must be big enough */
void my_strcat(char s[], char t[]);

int main()
{
    char name[] = "tristan";
    char letter = 't';
    char other_name[] = "izzy";

    squeeze(name, letter);
    printf("%s\n" , name);

    my_strcat(name, other_name);
    printf("%s\n", name);
}

void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void my_strcat(char s[], char t[])
{
    int i, j;
    i = j = 0;

    while (s[i] != '\0') /* find end of s */
        i++;
    
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;

}


