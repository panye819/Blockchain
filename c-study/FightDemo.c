#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    //使用时间作为种子，产生不一样的随机数
    srand((unsigned) time(NULL));
    //rand()函数的取值范围是0-32767
    printf("%d\n", rand());
//    return 0;
    /**
    使用循环模拟实现玩家对战：
        双方初始HP均为100
        每次攻击5-15
        HP最先到零或以下的被KO
    */
    int hp1 =100 ,hp2 = 100;
    int att1, att2;
    int round = 0;
    while(hp1 >=0 && hp2 >=0)
    {
        //默认1p首先攻击
        att1 = rand() % 11 +5;
        att2 = rand() %11 +5;
        //玩家1攻击，玩家2掉血
        hp2 -= att1;
        hp1 -= att2;
        if(hp1<=5 || hp2<=5)
        {
             printf("KO!~游戏结束，玩家1的血量：%d\t玩家2的血量：%d\n",hp1,hp2);
             break;
        }
        printf("***********************************************\n");
        printf("第%d轮：\n", round);
        printf("玩家1攻击力：%d,玩家2剩余血量：%d\n", att1, hp2);
        printf("玩家2攻击力：%d,玩家1剩余血量：%d\n", att2, hp1);
        printf("***********************************************\n");
        round++;
        Sleep(1000);


    }


}
