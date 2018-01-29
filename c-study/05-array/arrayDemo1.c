#include <stdio.h>
#define N 5
/**
    数组是一个变量，由数据类型相同的一组元素组成
    数组的结构和基本要素：
        1、标识符：
            数组的名称，用于区分不同的数组
        2、数组元素：
            向数组中存放的数据，数组长度固定不变，避免数组越界
        3、数组下标：
            对数组元素进行编号，从0开始
        4、元素类型：
            数组元素的数据类型，数组中的元素必须具有相同数据类型

*/
int main()
{
    int years[6] = {2012,2013,2014,2015,2016,2017};
    int months[12] = {1,3,5,7,8,10,12};//未分配的元素，未初始化，默认值为0
    int days[]= {1,15};//数组元素个数为2，无法添加元素 int array[]={}是错误的
    double scores[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("请输入第%d为同学的成绩: ",i+1);
        scanf("%lf",&scores[i]);
    }
    printf("---------------------------------------");
    for(i=0;i<N;i++)
    {
        printf("第%d位同学的成绩是： %.2lf \n",i+1,scores[i]);
    }
    return 0;




}
