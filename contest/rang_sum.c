#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long int a, b;
    
    while (t--) {
        scanf("%lld %lld", &a, &b);

        if(a<b) {
            long long int sum_a = a*(a+1)/2;
            long long int sum_b = b*(b+1)/2;

            long long int total_sum = (sum_b - sum_a) + a;

            printf("%lld\n", total_sum);
        }
        else {
            long long int sum_a = a*(a+1)/2;
            long long int sum_b = b*(b+1)/2;

            long long int total_sum = (sum_a - sum_b) + b;

            printf("%lld\n", total_sum);
        }
        
    }
    return 0;
}