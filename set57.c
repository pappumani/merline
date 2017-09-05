#include<stdio.h>
void main()
{
int a[50],i,n,h,l;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
h=l=a[0];
for(i=1;i<n;++i)
{
if(a[i]>h)
h=a[i];
if(a[i]<l)
l=a[i];
}
printf("The highest element is %d",h);
printf("\nThe lowest element is %d",l);
 }
