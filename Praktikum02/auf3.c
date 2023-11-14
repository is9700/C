
#include <stdio.h>
#include"auf3.h"

#define max 2

int tail =-1;
int head=0 ;
int queue[max];

void enqueue(int i)// 3 4 5 6
{   
    
    if(tail  < (max-1) )//3<4
    {

        queue[tail++%max]=i;//queue[3]
        
    }
else 
{
    queue[tail%max]=i;//queue{3]
}
}

int dequeue()//3 4 2 1
{
if(head<=tail)
{
return queue[head++%max];


}
else 
{
return -1;
}

}


int main(){
enqueue(1);
enqueue(2);
enqueue(2);
printf("%i ", dequeue());
enqueue(3);
printf("%i ", dequeue());
printf("%i ", dequeue());
printf("%i ", dequeue());
enqueue(4);
enqueue(5);
printf("%i ", dequeue());
printf("%i \n", dequeue());
return 0;
}
