#include <stdio.h>
void main()
{
int a[10];
int i, max, min,m,sum;
printf("Enter the m value: ");
scanf("%d",&m);
printf("Enter values in the array: ");
for(i=0; i<size; i++)
{
scanf("%d", &a[i]);
}
max = a[0];
min = a[0];
for(i=1; i<size; i++)
{
if(a[i]>max)
{
max=a[i];
}
if(arr[i]<min)
{
min = arr[i];
}
printf("Maximum element = %d\n", max);
printf("Minimum element = %d", min);
sum=min+max;
printf("sum is=%d",sum);
}
