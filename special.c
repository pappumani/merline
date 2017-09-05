include <stdio.h>
void main()
{
char str[20];
int spl=0,i=0,alpha=0,dig=0;
printf("\nEnter any string : ");
gets(str);
while(str[i]!='\0')
{
if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
alpha++;
}
else if(str[i]>='0' && str[i]<='9')
{
dig++;
}
else
{
spl++;
}
i++;
}
printf("\nAlphabets = [ %d ]\n", alpha;
printf("\nDigits = [ %d ]\n", dig);
printf("\nSpecial characters = [ %d ]\n",spl);
}
