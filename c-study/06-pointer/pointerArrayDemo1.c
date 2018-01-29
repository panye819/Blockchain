#include <stdio.h>
/**
    一个类型为T的指针的移动，以sizeof(T)为移动单位
    数组名就是这块连续内存单元的首地址
    数组第i+1个元素可以表示为：
        1、第i+1个元素的地址是：&num[i+1] 或者num+i+1
        2、第i+1个元素的值是：num[i+1]或*(num+i+1)
    为指向数组的指针赋值：
        int * ptr_num = num 或 int * ptr_num = &num[0]
    指针变量可以指向数组元素：
        int * ptr_num = &num[4] 或int * ptr_num = num + 4
*/
int main()
{
    int i;
    double score[5] = {98,87,65,43,76};
    //score的值和&score[0]的地址是一样的
    double * ptr_score;
    ptr_score = score;
    for(i=0;i<5;i++)
    {
        printf("%.2lf\n", *ptr_score++);
    }
	return 0;
}
