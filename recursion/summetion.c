#include<stdio.h>

long long int summation(int arr[], int n, int i);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int i=0;
    long long int sum = summation(arr, n, i);

    printf("%lld\n", sum);
    return 0;
}
long long int summation(int arr[], int n, int i) {
    if(i == n) return 0;

    return (arr[i] + summation(arr, n, i+1));
}