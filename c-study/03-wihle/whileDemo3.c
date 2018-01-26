#include <stdio.h>

int main()
{
    double count = 800;
    int year = 2015;
    while (count <= 2000)
    {
        count *= 1.25;
        year++;
    }
    printf("在%d年，淘宝销售额达到了2000亿\n",year);

}
