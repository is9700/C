#include <stdio.h>
#define max 60 
long push(int key);
long pop();
int stack[max];

static int top=-1;
int main(){
    int i;
    for(i=1;i<=10;i++){
        push(i);
    }
    for(i=0; i < 10;i++){
        printf("%d\n", pop());
    }

    return 0;
}
long push(int key)
{
    if (top<max-1) //tableau peut etre remplie
    {    
         stack[++top]=key;
        
    return 1;
 
    }
else 
{
return 0;
}

}
long pop()
{
    if (top>-1)//tableau non vide
{  
    return stack[top--]; 
     
}
else 
{
    return 0;
}

}