#include <stdio.h>

void swap(int *x, int *y){
    int tmp = *x;//differenciation
    *x = *y;//differenciation
    *y = tmp;//differenciation
}

int main(){
    int a = 100;
    int b = 200;
    swap(&a , &b);
    printf("a = %d   b = %d\n", a, b);
    return 0;
}