#include<stdio.h>
#include<string.h>

int main()
{
    char str[15];
    fgets(str, 15, stdin);
    printf("%s", str);
    return 0;
}