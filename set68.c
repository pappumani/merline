#include <stdio.h>
void main()
{
    FILE *fptr;
    char str[10];
    fptr = fopen("emp.rec", "w");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("hello \n");
    scanf("%s", str);
    fclose(fptr);
}
