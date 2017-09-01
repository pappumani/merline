#include <stdio.h>
int main()
{
int bse, expo,result=1;
printf("Enter a base number: ");
scanf("%d",&bse);
printf("Enter an exponent: ");
scanf("%d",&expo);
while (expo!= 0)
{
result *= bse;
--expo;
}
printf("Ans= %d", result);
return 0;
}
