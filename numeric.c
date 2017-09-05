include <stdio.h>
include<string.h>
void main()
{
char str[20];
int dig=0,i=0;
printf("\nEnter any string : ");
gets(str);
while(str[i]!='\0')
{
if(str[i]>='0'&&str[i]<='9')
{
digits++;
}
printf("\nDigits =[ %d ]\n",dig);
}
