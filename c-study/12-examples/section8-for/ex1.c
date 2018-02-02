#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3;
    int b=3;
    int c=6;
    int count=1;
    printf("the result is :\n");
    printf("Time red ball white ball  black ball\n");
    for(int a=0;a<4;a++){
        for(int b =0;b<4;b++){
                if((8-a-b)<=6){
                    printf("%3d%8d%9d%10d\n",count++,a,b,8-a-b);
                }
            }
        }
    return 0;
}
