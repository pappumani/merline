#include <stdio.h>
#include <string.h>
char caps_check(char *);
int main()
{
    char str[10], l;
 
    printf("Enter a string to find it's first capital letter: ");
    scanf("%s", str);
    l = caps_check(str);
    if (l == 0)
    {
        printf("No capital letter is present in %s.\n", str);
    }
    else
    {
        printf(" c program/n,The first capital letter in %s is %c.\n", string, l);    }
        return 0;
    }
    
