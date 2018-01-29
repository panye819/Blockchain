#include <stdio.h>

/**
*/
int main()
{
    int i;
    int j;
    double scores[5];
    for(i=0;i<5;i++)
    {
        printf("请输入第%d位数字：",i+1);
        scanf("%lf",&scores[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("第%d位数字为：%.2lf\n",i+1, scores[i]);
    }

    return 0;

}
