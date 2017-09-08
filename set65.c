#include <stdio.h>
void main()
{
char a;
printf("Enter any character: ");
scanf("%c", &a);
if((a >= 'a' && a<= 'z') || (a >= 'A' && a <= 'Z'))
{
printf("'%c' is alphabet.",a);
}
else if(a >= '0' && a<= '9')
{
printf("'%c' is digit.",a);
}
}
