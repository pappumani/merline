#include <stdio.h>
void main()
{
    int  num, b, d= 0, base = 1, rem;
 
    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &num); /* maximum five digits */
    b= num;
    while (num > 0)
    {
        rem = num % 10;
        d = d + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", b);
    printf("Its decimal equivalent is = %d \n",d);
}
