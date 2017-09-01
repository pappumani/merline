#include<stdio.h>
void main()
{
int a,b,c;
printf("enter values:");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is large");
}
elseif(b>a&&b>c)
{
printf("b is large");
}
else
printf("c is large");
}
