include<stdio.h>
void main()
{
int a=1,m,sum,n=200
for(a=1;a<=n;a++)
{
sum = 0;
for(m=2;m<=a/2;i++)
{
if(a%m==0)
{
sum++;
break;
}
}
if(sum==0 && a!= 1)
{
printf("%d ",a);
}
}
}
