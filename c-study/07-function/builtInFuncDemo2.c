#include <stdio.h>
#include <stdlib.h>

/**

*/
int main()
{
    //0表示假，非0表示真
    //1、设置随机种子，一般跟时间联用，因为时间每时每刻都是不同的
    srand(time(NULL));
    //2、去随机数
    int num = rand();
    printf("%d\n", num);
    printf("这里是普通文字，非常普通！\n");
    /**
        颜色属性由两个十六进制数字指定，第一个为背景色，第二个为前景色
        每个数字可以为下列值之一：
        黑色 = 0  蓝色 = 1 绿色 = 2 湖蓝色 = 3
        红色 = 4  紫色 = 5 黄色 = 6 白色 = 7
        灰色 = 8  淡蓝色 = 9 淡绿色 = A 淡红色 = C
        淡紫色 = D 淡黄色 = E 亮白色 = F
    */
    system("color 4E");
    system("pause"); //暂停
    printf("这里是普通文字，非常普通！\n");
    return 0;
}
