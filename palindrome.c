#include <stdio.h>
int main()
{
int a, n=0, rem, oi;
printf("Enter an integer: ");
scanf("%d", &a);
oi=a;
while( a!=0 )
{
rem= a%10;
n= n*10 + rem;
a/=10;
}
if (oi==n)
printf("%d is a palindrome.", oi);
else
printf("%d is not a palindrome.", oi);
return 0;
}
