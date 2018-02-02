#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=1020;
    int day=0;
    while(num>0){
        num = num -num/2-2;
        day++;
    }

    printf("day is %d\n",day);


    return 0;
}
