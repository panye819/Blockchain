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
    printf("准备进行冒泡排序。。。。。");
    for(i=0;i<5;i++)
    {
        double temp = 0.0;
        for(j=0;j<5-i;j++)
        {
            if(scores[j]<scores[j+1])
                {
                    temp = scores[j];
                    scores[j] = scores[j+1];
                    scores[j+1] = temp;
                }
        }

    }
    printf("进行过冒泡排序之后的数组是：\n");
    for(i=0;i<5;i++)
    {
        printf("第%d位数字为：%.2lf\n",i+1, scores[i]);
    }
    return 0;

}
