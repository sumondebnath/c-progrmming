#include<stdio.h>

int miss_num(int s, int a, int b, int c);

int main()
{
    int t;
    scanf("%d", &t);
    int s, a, b, c;

    while (t--) {
        scanf("%d %d %d %d", &s, &a, &b, &c);

        int ans = miss_num(s, a, b, c);

        printf("%d\n", ans);
    }

    return 0;
}
int miss_num(int s, int a, int b, int c) {
    int sum = a+b+c;

    return s-sum;
}