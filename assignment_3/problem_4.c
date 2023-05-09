#include <stdio.h>

int add(int a, int b, int c);

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int result = add(x, y, z);

    printf("%d\n", result);

    return 0;
}
int add(int a, int b, int c) {
    return (a*b)-c;
}