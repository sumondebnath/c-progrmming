#include<stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }

    int m;
    scanf("%d", &m);
    int B[m];
    for(int i=0; i<m; i++) {
        scanf("%d", &B[i]);
    }

    int ans[n+m];

    for(int i=0; i<n; i++) {
        ans[i] = A[i];
    }

    int i=n;
    for(int j=0; j<m; j++) {
        ans[i] = B[j];
        i++;
    }

    for(int i=0; i<n+m; i++) {
        printf("%d ", ans[i]);
    }
    
    printf("\n");

    return 0;
}