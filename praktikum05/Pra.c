#include "Pra.h"
#include <stdio.h>
#include<string.h>
 #include<stdlib.h>



int main()

{    
 
   char s[] = "bb";
		char w[] = "aaYounes ";
        printf("%s%d\n"," number of counter " ,countspacezeiger(w));
		  char* result = stringcat(s,w);
        printf("%s\n", result);
      
		    Binomialkoeffizienten(10, 0);
    Binomialkoeffizienten(10, 1);
    Binomialkoeffizienten(10, 10);
    Binomialkoeffizienten(49, 6);

}

int countspace(char s[])
{
    int m = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
        if (s[i] == ' ')
        {
            m++;
        }
    }

    return m;
}
 /*int countspacezeiger(char s[]) 
 {
  int m=0;
      char *ptra ;
      ptra=&s[0];//ptra=s;
       while(*ptra!='\0')//ptra statt *ptra
       {
       ptra++;
       if(*ptra==' ')
       {
       m++;
       }
       }
       return m ;
    }
    
  */
int countspacezeiger(char *s) 
{
    int summe=0;
    char *ptr=s;

    while(*ptr!='\0')
    {
        if(*ptr==' ')
        {
            summe++;
        }

        ptr++;
    }
return summe;
}
 
     

double min(double a[], int n)
{
    double s = 0.0;
    if (a[0] == '\0')
    {
        return s;
    }
    else
    {
        double n = a[0];

        for (int i = 0; i < n; i++)
        {
            if (a[i] > n)
            {
                a[i] = n;
            }
            s = a[i];
        }
    }
    return s;
}

 /*char *stringcat (const char* str1, const char*
str2)
{       int index=0;
        int n = strlen(str1)+strlen(str2);
 char *ptr=(char*)malloc(sizeof(char)*n);
if(ptr!=NULL)
{
    for( int i =0 ; str1[i]!='\0';i++)
    {
         *(ptr+i)=*(str1+i);
        index++;
 }


     for(int   j =0 ; *(str2+j)!='\0';j++)
    {
        *(ptr+index+j)=*(str2+j);
    }
    
    *(ptr+n)='\0';
}
    return ptr ;


}*/

char *stringcat (const char* str1, const char*
str2)
{
int n=strlen(str1)+strlen(str2);

char * ptr=(char *) malloc(sizeof(char)*n);

if(ptr!=NULL)
{
    for(int i=0;i<strlen(str1);i++)
    {
        ptr[i]=str1[i];
    }
for(int j=0;j<strlen(str2);j++)
{
    ptr[j+strlen(str1)]=str2[j];
}
ptr[n]='\0';
return ptr;
}


}


int facultet(int n)
{
    int s;
    if (n== 0)
    {
        s=1;
    }
    else 
    {
    while (n > 0)
    {
        s = s * n;
        n--;
    }
    }
    return s;
}
long Binomialkoeffizienten(int n, int k)
{

    long s = 1;
    if(n>k&&k!=0)
    {
    s = facultet(n) / (facultet(k) * facultet(n - k));
    }
    return s;
}
