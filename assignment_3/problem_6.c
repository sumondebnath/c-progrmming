// #include<stdio.h>

// int pas_by_ref(int *p, int *q);

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     int *ptr = &a;
//     int *qtr = &b;

//     printf("%d\n", &a);
//     printf("%d\n", &b);

    

//     pas_by_ref(&a, &b);

//     return 0;
// }
// int pas_by_ref(int *p, int *q) {
//     printf("%d\n", &p);
//     printf("%d\n", &q);
//     printf("%d\n", *p);
//     printf("%d\n", *q);
// }




#include<stdio.h>

void func(int a);
int main()
{
    int a=10;
    printf("Before call function a = %d\n", a);

    func(a);

    printf("after call function a = %d\n", a);

    return 0;
}
void func(int a) {
    a = 100;
    printf("In function call a = %d\n", a);
}







