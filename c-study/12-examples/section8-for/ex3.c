#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;

    for(int i =1;i<11;i++){
        sum = sum + i*i;
    }
    printf("sum is %d\n",sum);


    return 0;
}
