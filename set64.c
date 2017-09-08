#include <stdio.h>
#include <string.h>
char a[100], sub[100];
int sum= 0, count= 0;
void main()
{
int i,j,k,l,m;
printf("\nEnter a string : ");
scanf("%[^\n]s",a);
 l= strlen(a);
 printf("\nEnter a substring : ");
 scanf(" %[^\n]s", sub);
 m = strlen(sub);
 for (i = 0; i < l;)
 {
 j = 0;
 sum = 0;
 while ((a[i] == sub[j]))
 {
  sum++;
  i++;
  j++;
 }
if (sum == m)
{
count++;                                  
sum= 0;
}
else
i++;
}    
printf("%s occurs %d times in %s", sub, count,a);
}
