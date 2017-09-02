#include <stdio.h>
int main()
{
int a,i,fac=1;
printf("Enter the value: /n");
scanf("%d",&a);
for(i=1; i<=a; ++i)
{
fac=fac*i;          
}
printf("Factorial of %d = %d", a,fac);
}
