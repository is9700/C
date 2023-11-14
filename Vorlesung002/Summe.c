
#include <stdio.h>

#define DEBUG 1
#define LOG(text) printf("Datei %s, Zeile %d: %s\n", __FILE__, __LINE__, text)
#define MIN(a,b) (a<b) ? a:b







int factoriel(int n){


    if (n==0) return 1;
     
     else {
    
        return n*factoriel(n-1);
    
     }
}

int main(){

  #if DEBUG
     LOG("Vor Summe");
  #endif
  printf("Summe = %d\n", factoriel(10));// FACTORIEL 100
  printf("%d\n", MIN(100,50));// 50


}