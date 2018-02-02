#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1,m,sum,i;
    while(1){
        m=n;
        sum=0;
        int count=0;

        for(int i=1;i<8;i++){
            m = m*2;
            sum += m;
        }
        sum += n;
        if(sum=765){
            printf("The first floor has %d lights\n",n);
            printf("The top floor has %d lights\n",m);
            break;
        }
        n++;
    }

    return 0;
}
