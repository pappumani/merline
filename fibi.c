#include <stdio.h>
void main()
{
int   a= 0,b= 1,c,lim,sum=0;
printf("Enter the limit values:\n");
scanf("%d", &lim);
printf("Fibonacci Series is:\n");
printf("%d\n",a);
printf("%d\n",b);
sum= 2;
while (sum< lim)
{
c= a+b;
sum++;
printf("%d\n",c);
a=b;
b=c;
}
}
