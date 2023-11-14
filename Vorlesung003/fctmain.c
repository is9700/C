#include <stdio.h>

static long counter = 0;

void print_counter(){
    printf("Anzahl der Funktionsaufrufe = %ld\n", counter);
}
int quadrat(int x){
    counter++;
    return x*x;
}

int summe(int n){
    static int c = 0;
    c++;
    printf("Anzahl Aufrufe summe = %d\n", c);
    if(n==0) return 0;
    return n + summe(n-1);
}

int main(){
    printf("Quadrat %d\n", quadrat(10));
    printf("Quadrat %d\n", quadrat(8));
    printf("Quadrat %d\n", quadrat(7));
    print_counter();
    printf("Summe = %d\n", summe(10));
    return 0;
}