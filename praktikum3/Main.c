#include"praktikum3.h"
#define length 10
int insert(int b);
int deletee (int c);
int  member(int b);
int main()
{   printf("%d\n", insert(1));
printf("%d\n", insert(3));
printf("%d\n", deletee(3));
printf("%d\n", insert(5));
printf("%d\n", member(5));
printf("%d\n", member(7));
    return 0;
}




enum flag
{
	free,
	deleted,

	occp
};

//typedefine int  element
//
typedef struct {
    int value ;
    enum flag statut ;
}element; 


static element a[length];

int hash(int x)
{
	return x % length;
}
int insert(int b)
{   
    int index= hash(b);
    int sum=0;
    while(sum<length)
    {   
        if(a[index].statut==free || a[index].statut==deleted)
        {   
            a[index].value=b;
            a[index].statut=occp;
        return 1;
        }
        index=(index+1)%length;
        sum++; 
    }
return 0;
}

int deletee (int c)
{
    int sum=0;
    int index=hash(c);
    while(sum<length)
    {
     if(a[index].statut=occp&&a[index].value==c)
     {
        a[index].statut=deleted;
      return 1; 
     }
     else if(a[index].statut==free)
    { 
       return 0;
    }
     else if(a[index].statut==deleted)
     {
     index=(index+1)%length;
    sum++;   
     }
    }

	
}
int member(int b)
{   
    int index=hash(b);
    int sum=0;
	while(sum<length)
    {
        if(a[index].statut=occp&&a[index].value==b)
        {
            return 1 ;

        }
    sum++;
    index=(index+1)%length;
    }
    return 0 ;
}
