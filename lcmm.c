#include <stdio.h>
void main()
{
int a,b,lcm;
printf("Please Enter two Values \n");
scanf("%d %d",a,b);
while(a>b)
{
if(lcm%a==0&&lcm%b==0) 
{
printf("LCM of %d and %d = %d",a,b,lcm);
break;
}
++lcm
}
}
