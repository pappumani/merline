#include<stdio.h>
void main()
{
int n,i=0,rev;
printf("enter the n value");
scanf("%d",&n);
while(n!=0)
{
rev=n%10;
i=i*10+rev;
n/=10;
}
printf("the reversed value is=%d,i);
}
