#include <stdio.h>
#include "auf2.h"
char to_upper_case(char c){
char *t =&c;

if(*t>=97&&*t<=122)
{
	*(t)=*(t)-32;
	return *t;
}

	return *t ;


}


/*void upper(char text[])
{
	

for (char * ptr = text ; *ptr!='\0'; ptr++ )

{	
	*ptr=to_upper_case(*ptr);

}



}
*/
void upper(char text[])
{
    char * ptr = text ;
    for (int i =0;*(ptr+i)!='\0'; i++ )

{	
	*(ptr+i)=to_upper_case(*(ptr+i));

}
}

int main()
{
    char a[] = "cde ";
    upper(a);
  printf ("%s",a  );
    return  0;


}


