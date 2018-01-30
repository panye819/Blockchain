#include <stdio.h>
/**
    阳阳买苹果：
        阳阳买苹果，每个苹果0.8元，第一天买两个苹果，第二天开始每天买前一天的
        2倍，直到购买的苹果个数为不超过100的最大值，求阳阳每天平均花多少钱？
*/

int main()
{
    int day = 0;
    int mount = 1;
    float money = 0;
    float ave = 0;
    while(mount*2<100)
    {
        day++;
        mount = mount *2;
        money+=0.8*mount;
        printf("第%d天,买了%d个苹果，总花费是%.6f\n",day,mount,money);
        printf("---------------------------------------------------\n");
    }
    ave = money/day;
    printf("一共买了%d天,买了%d个苹果，总花费是%.6f\n",day,mount,money);
    printf("The avg_cost is %.6f\n",ave);
    return 0;

}

