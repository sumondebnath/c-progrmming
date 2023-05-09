#include<stdio.h>

void hello();
void world();

int main()
{
    hello();
    hello();

    return 0;
}
void hello() {
    printf("Hello ");
    world();
}
void world() {
    printf("world\n");
}