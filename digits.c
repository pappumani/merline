#include<stdio.h>
void main()
{
int a,sum=0;
printf("enter the value");
scanf("%d",&a);
while(a!=0)
{
a/=10;
++sum;
}
printf("value is:%d",sum);
}
