#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int fibonacci(int);
int main()
{
  int no,i=0,c=0;
     printf("\n enter the number:");
     scanf("%d",&no);
   for(c=1;c<=no;c++)
{
    printf("\n fibonacci series=%d",fibonacci(i));
    i++;
    }
    getch();
    return 0;
    }
 int fibonacci(int n)
   {
    
     if(n==0)    
     return 0;
    else if(n==1)
    return 1;
        return fibonacci(n-1)+ (n-2);
        
    }