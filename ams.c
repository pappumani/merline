#include <stdio.h>
int main()
{
int num,m,rem,result=0;
printf("Enter a  digit: ");
scanf("%d", &num);
m=num;
while (m!= 0)
{
rem = m%10;
result += rem*rem*rem;
m/= 10;
}
if(result == num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
}
