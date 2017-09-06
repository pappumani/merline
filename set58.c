#include<stdio.h>
void main()
{
int m[10]={ 9,8,7,6,5,4,3,2,1,0};
int a=0,b;
float avg=0;
for(b=0;b<10;b++)
{
a=a+m[b];
}
avg=(float)a/b;
printf("average value is %f",avg);
}
