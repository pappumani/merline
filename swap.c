#include <stdio.h>
void main()
{
int a,b,temp;
printf("Enter a,b value: ");
scanf("%d",&a,&b);
temp=a;
a= b;
b= temp;
printf("\nAfter swapping,a = %d\n",a);
printf("After swapping,b= %d/n",b);
}
