/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct address
{
    int  a[5];
};
void pointers(struct address s);
int main()
{
    struct address s1 ; 
     printf("Enter numbers: ");
    scanf("%d", &s1.a[5]);
    pointers(s1);

}
 
void pointers(struct address s)
{
    int *p=&s.a[5];
    int i,d;
    while(d<=5)
    {
    while(i<=4)
    {
     printf(" The Element %d is stored at %p\n",(d+i),(p+i));
     i++;
    
    }
    d=s.a[i]+1;
        
   }

}





