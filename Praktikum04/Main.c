#include <stdio.h>
#define max 5
#include <stdlib.h>
int insert(int b);
int member(int a);
int delete1 (int a);
typedef struct elmnt 
{ int k ;
struct elmnt *next; 

} Element ;

static Element arr[max];

void main(){
int i;
int SIZE =3;
for (i = 1; i <= 2 * SIZE; i++)
{
	printf("%d", insert(i));
}
for (i = 1; i <= SIZE; i++)
{
	printf("%d", member(i));
}
for (i = SIZE + 1; i <= 2 * SIZE; i++)
{
	printf("%d", delete1 (i));
}
for (i = 1; i <= 2 * SIZE; i++)
{
	printf("%d", member(i));
}
printf("\n");
}



int hash(int a )
{
    return a%max;
}
int insert(int b)
{
    int index=hash(b);
Element * ptr=(Element *)malloc(sizeof(Element));
if(ptr!=NULL)
{
    ptr->k=b;
    ptr->next=arr[index].next;
    arr[index].next=ptr;
    return 1 ;
}
return 0;

}
int member(int a )
{
    int index=hash(a);

    Element*ptr=(Element *) arr[index].next;

    while(ptr!=NULL)
    {
        if(ptr->k==a)
        {
            return 1;
        }   
        else 
        {
            ptr=ptr->next;
        }
    }
}
int delete1(int a )
{       int index=hash(a);
    Element *ptr= (Element *)arr[index].next;
    while(ptr!=NULL)
    {   
        if(ptr->k==a)
        {   
            arr[index].next=ptr->next;
            free(ptr);
            return 1;
        }
        else 
        {
            ptr=ptr->next;
        }

    }
return 0;
}


/*
int insert(int b)
{   int index = hash(b);
    Element *neu=( Element *)malloc(sizeof(Element));
    if(neu>0 )
    {   
         neu->k=b;
         neu->next=arr[index].next;
       arr[index].next=neu;
       return 1;
    }
return 0;
}
int member(int a)
{   
    int index= hash(a);
  Element *ptr =(Element *)arr[index].k;

    while( ptr!=NULL )
    {
        if(ptr->k==a)
        {
            return 1;
        }
    ptr=ptr->next;
    }
    return 0;

}
int delete1 (int a)
{
    int index= hash(a);
    Element *ptr =(Element *)arr[index].next;
    if(ptr!=NULL)
    {
        if(ptr->k==a)
        {
            arr[index].next=ptr->next ;
            return 1;
        }
        else 
        {
            return 0;
        }

    }
}
*/