#include<stdio.h>
void main(void)
{
char a[10],b[10];
int i=0,j=0;
printf("\nEnter a String:");
gets(a);
printf("\nEnter Second String:");
gets(b);
while(a[i]!='\0')
i++;
while(b[j]!='\0')
{
a[i]=b[j];
j++;
i++;
}
a[i]!='/0';
printf("\nConcatenated String is: %s",a);
}
