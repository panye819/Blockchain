#include <stdio.h>

int main()
{
    int i = 1;
    int count = 0;
    while (i<101)
    {
        i++;
        count += i;
    }
    printf("Count is :%d\n", count);
    return 0;
}
