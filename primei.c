#include<stdio.h>
int main()
{
int num=1,i=20,sum=0,m;
for(num = 1;num<=i;num++)
{
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
sum++;
break;
}
}
if(sum==0 && num!= 1)
printf("%d ",num);
}
}
