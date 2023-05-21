#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int min;

    int j = 0;
    for(int i=0; i<n; i+=k) {
        min = arr[i];
        for(j=i+1; j<n && j<i+k; j++) {
            if(arr[j] < min) {
                min = arr[j];
            }
        }
        printf("%d ", min);
    }  

    return 0;
}
