#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
   int a=1,b=10;
   do{
    b -=a;
    a++;
   }while(b-- <0);
   printf("b : %d\n", b);
}
