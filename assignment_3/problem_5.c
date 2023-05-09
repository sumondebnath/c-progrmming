#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int len);

int main() {
    char str[50];
    scanf("%s", str);

    int len = strlen(str);

    int result = is_palindrome(str, len);

    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}

int is_palindrome(char str[], int len) {
    
    int i = 0;
    int j = len - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}