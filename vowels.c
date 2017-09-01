#include <stdio.h>
int main()
{
    char m;
    int x,y;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    x= (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u');
    y= (m == 'A' || m == 'E' || m == 'I' || m == 'O' || m == 'U');
    if (x||y)
        printf("%c is a vowel.", m);
    else
        printf("%c is a consonant.", m);
    return 0;
}
