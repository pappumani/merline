include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
sacnf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greater");
elseif(b>a&&b>c)
printf("b is greater");
else
printf("c is greater");
}
