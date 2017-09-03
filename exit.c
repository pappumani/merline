include <stdio.h>
int void(int argc, char *argv[])
{
int a= 0;
char text[a];
char q;
while(1)
{
 scanf("%s", &q);
 if(q==71)
 {
 break;          
 }
 text[a] = q;
  a++;
 }
 printf("%s", text);
 getch();
  }
