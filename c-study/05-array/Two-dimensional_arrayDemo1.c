#include <stdio.h>
#define ROW 3
#define COL 3
/**
    游戏规则：
        1、游戏一共进行10天
        2、每天结算好感度，一旦有三个或以上的嫔妃好感度低于60，则发生暴乱
            游戏结束。
*/
int main()
{
    double score[4][3] = {
        {98,67,89},
        {89,67,88},
        {99,77,55},
        {78,99,67}
    };
    for(int i = 0;i<4;i++)
    {
        for(int j =0 ;j<3;j++)
        {
            printf("第%d位同学的第%d门成绩是：%.2lf\n", i+1,j+1,score[i][j]);
        }
        printf("\n");
    }
    return 0;
}
