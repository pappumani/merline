#include <stdio.h>
#include <string.h>
void main()
{
char str[100];
int a=0,b= 0,c=1;
printf("Enter the paragraph /n");
scanf("%c",&str);
for(a=0; str[a] !='\0'; a++)
{
b= b+c;
}
printf("The number of characters in the string are %d\n", l);
for(a= 0; a<= l-1; a++)
{
if(str[a] == ' ')
{
 c= c+ 1;
}
}
printf("The number of lines in the string are %d",c);
}
