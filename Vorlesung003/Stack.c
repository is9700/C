#include "Stack.h"
#define max 60 
int stack[max];

 static int top=-1;
int push(int key)
{
    if (top<max-1) //tableau peut etre remplie
    {
         stack[top++]=key;
    return 10;
    }
else 
{
return 0;
}

}
int pop()
{
    if (top>0)//tableau non vide
{
    return stack[top];   
}
else 
{
    return 0;
}

}