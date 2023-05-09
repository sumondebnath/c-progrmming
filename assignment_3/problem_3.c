#include<stdio.h>

int count_before_zero(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = count_before_zero(arr, n);

    printf("%d\n", result);

    return 0;
}
int count_before_zero(int arr[], int n) {
    int count = 0;

    for(int i=0; i<n; i++) {
        if(arr[0] == 0) {
            return 0;
        }
        else if(arr[i] == 0) {
            break;
        }
        count++;
        
    }
    
    return count;
}