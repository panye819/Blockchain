#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total=0;
    int year=5;
    for(int i =0;i<5;i++){
        total=(total+1000)/(1+0.025);
    }

    printf("Must sace %5.2f at first\n",total);


    return 0;
}
