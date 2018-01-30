#include <stdio.h>


int main()
{
    int num = 9;
    {
        int num = 90;
    }
    printf("%d\n", num);
    return 0;
}
