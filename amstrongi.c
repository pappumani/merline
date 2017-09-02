include<stdio.h>
void main()
{
int num=1,i,sum,n=200
for(num = 1;num<=n;num++)
{
sum = 0;
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
return 0;
}
