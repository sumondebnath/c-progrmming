


#include<stdio.h>


void func(int *a);
int main()
{
   int a=10;
   printf("Before call function a = %d\n", a);


   func(&a);


   printf("after call function a = %d\n", a);


   return 0;
}
void func(int *a) {
   *a = 0;
   printf("In function call a = %d\n", *a);
}



















// #include<stdio.h>

// int ascii_val();

// int main()
// {
//     printf("%d\n", ascii_val());

//     return 0;
// }
// int ascii_val() {
//     char ch;
//     scanf("%c", &ch);
    
//     return ch;
// }

// #include<stdio.h>


// int pas_by_val(int x, int y);


// int main()
// {
//    int a, b;
//    scanf("%d %d", &a, &b);


//    pas_by_val(a, b);


//    printf("%p\n", &a);
//    printf("%p\n", &b);




//    return 0;
// }
// int pas_by_val(int x, int y) {
//    printf("%d\n", x+y);
//    printf("%p\n", &x);
//    printf("%p\n", &y);


// }