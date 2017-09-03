#include <stdio.h>
int main()
{
char ch;
int cc=0,a;
while((ch=getc(stdin))!=EOF)
{
if (ch !='\n') {++cc;}
}
if(cc>0)
{
cc++;
}
printf( "%lu %lu %lu\n", charcount, wordcount, linecount );
}
