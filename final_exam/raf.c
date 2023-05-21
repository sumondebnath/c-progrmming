
    // this program is who_win

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t=0, p=0;
    int tiger, pathan;
    while(n--) {
        scanf("%d %d", &tiger, &pathan);

        if(tiger > pathan) {
            t++;
        }
        if(tiger < pathan) {
            p++;
        }
    }

    if(t==p) {
        printf("Draw\n");
    }
    else if(t<p) {
        printf("Pathan\n");
    }
    else {
        printf("Tiger\n");
    }

    return 0;
}