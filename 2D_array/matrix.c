#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // primary diagonal
    int pri_dia = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) {
                pri_dia+=arr[i][j];
            }
        }
    }
    //secondary diagonal
    int sec_dia = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i+j== n-1) {
                sec_dia += arr[i][j];
            }
        }
    }
    printf("%d\n", abs(pri_dia - sec_dia));

    return 0;
}