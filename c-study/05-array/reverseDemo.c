#include <stdio.h>

/**
    冒泡排序
        基础原理：
            遍历与交换

*/
int main()
{
    int i;
    int j;
    double scores[5] = {111,1,11,2,22};
    for(i=0;i<5;i++)
    {
        printf("第%d位数字为：%.2lf\n",i+1, scores[i]);
    }
    printf("准备进行逆序操作。。。。。");
    for(i=0;i<5/2;i++)
    {
        double temp;
        temp = scores[i];
        scores[i] = scores[5-i-1];
        scores[5-i-1]= temp;
    }
    printf("进行过逆序操作之后的数组是：\n");
    for(i=0;i<5;i++)
    {
        printf("第%d位数字为：%.2lf\n",i+1, scores[i]);
    }
    return 0;

}
