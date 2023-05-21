#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a==0 && b==0) {
        printf("NO\n");
        return 0;
    }
    if(a==b) {
        printf("YES\n");
        return 0;
    }
    if(a+1==b || a-1==b) {
        printf("YES\n");
    }
    
    else {
        printf("NO\n");
    }

    return 0;
}