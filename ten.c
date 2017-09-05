#include <stdio.h>
void main() 
{
int m[10];
int a,great;
printf("Enter ten values:");
for (a= 0; a< 10; a++) 
{
scanf("%d",&m[a]);
}
great = m[0];
for(a = 0; a< 10;a++) 
{
if (m[a] > great) 
{
	great= m[a];
 }
 }
 printf("Greatest of ten numbers is %d",great);
 }
