#include<stdio.h>
void main()
{
char ch;		
ch=32; 
while(ch<=127)
{
printf("%c [%03d] ",ch,ch);
ch++;
}
printf("\n");
}
