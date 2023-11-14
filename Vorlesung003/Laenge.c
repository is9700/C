#include <stdio.h>
#include <string.h>


int laenge(char *text){
    int i = 0;
    //char *ptr=text; 
    char *ptr=&text[0];
    while(*(ptr+i)!='\0'){
        i++;
    }
    return i;
}

int main(){
    char *text;
    strcpy(text, "Halloooodadada");
    printf("Lange = %d\n", laenge(text));
    return 0;
}

