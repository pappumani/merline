#include <stdio.h>
void main()
{
char str[100];
int num=0,alpha=0,char=0,a;
printf("Enter a string: ");
gets(str);
for(a=0;str[a]!=NULL;a++)
{
if(str[a]>='0' && str[a]<='9')
num++;
else if((str[a]>='A' && str[a]<='Z')||(str[a]>='a' && str[a]<='z'))
char++;
else
countalpha++;
}
printf("\nnumbers: %d \ncharecters: %d \nalphanumerical: %d",num,char,alpha);
}
