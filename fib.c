#include <stdio.h>
void main()
{
int a,n,temp1 = 0,temp2 = 1,m;
printf("Enter the numbers: /n");
scanf("%d", &n);
for (a= 1; a<= n;a++)
{
printf(" fibanocci series is %d, ", temp1);
m =temp1+temp2;
temp1=temp2;
temp2= m;
 }
 }
