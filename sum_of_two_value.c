#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int val;
    scanf("%d", &val);
    int flag = 0;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] + arr[j] == val) {
                flag = 1;
            }
        }
    }
    if(flag==0) {
        printf("Not found!\n");
    }
    else {
        printf("Found!\n");
    }
    return 0;
}