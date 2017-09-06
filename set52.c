#include<stdio.h>
int main() 
{
char a[30],b[30];
int i=0;
printf("\nEnter two strings :");
gets(a);
gets(b);
while (a[i] ==b[i] && a[i]!= '\0')
i++;
if (a[i] > a[i])
printf("a>b");
else if (a[i] < b[i])
printf("a < b");
else
printf("a = b");
}
