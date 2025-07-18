//Experiment1：Observing memory addresses of code area,static area,and stack area
#include <stdio.h>

int n=0;
void test(int a, int b){
    printf("The address of formal parameter a is:%d\nThe address of formal parameter of b is:%d\n",&a,&b);
}

int main(){
    static int m = 0;
    int a = 0, b=0;
    printf("The address of the automatic variable a is:%d\nThe address of automatic variable of b is:%d\n", &a, &b);
    printf("The address of global variable n is:%d\nThe address of the static variable m is:%d\n", &n, &m);
    test(a,b);
    printf("The address of the main function is:%d", main);

    getchar();
    return 0;
}

