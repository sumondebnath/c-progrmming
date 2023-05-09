#include<stdio.h>

void print_even(int arr[], int n, int j);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int j=0;
    print_even(arr, n, j);
    return 0;
}
void print_even(int arr[], int n, int j){
    if(j == n) {
        return;
    }
    
    print_even(arr, n, j+1);

    if(j%2==0) {
        printf("%d ", arr[j]);
    }
}