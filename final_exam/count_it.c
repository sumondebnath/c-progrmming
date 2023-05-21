#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    fgets(str, 1001, stdin);

    int capital=0, small=0, spaces=0;

    for(int i=0; i<strlen(str); i++) {
        if(str[i] >='A' && str[i] <='Z') {
            capital++;
        }
        if(str[i] >= 'a' && str[i] <= 'z') {
            small++;
        }
        if(str[i] == ' ') {
            spaces++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, spaces);

    return 0;
}