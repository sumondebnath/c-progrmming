#include<stdio.h>

int search_engine(int arr[], int n, int s);

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[j]);
        }
        int s;
        scanf("%d", &s);

        int val = search_engine(arr, n, s);
        if(val != 0) {
            printf("Case %d: %d\n", i, val);
        }
        else {
            printf("Case %d: Not Found\n", i);
        }
    }
}
int search_engine(int arr[], int n, int s) {
    for(int k=0; k<n; k++) {
        if(arr[k] == s) {
            return k+1;
        }
    }
    return 0;
}