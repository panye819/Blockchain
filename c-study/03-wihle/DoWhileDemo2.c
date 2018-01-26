#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int choice;
   //打印游戏菜单
    printf("性格测试：\n");
    printf("如果你是以为君王，对于身旁的伴侣你希望？：\n");
    printf("1、只要有一位珍爱的妻子\n");
    printf("2、可以有两位以上的爱人\n");
    printf("3、拥有三千佳丽\n");

    //用户的选择

    do{
       printf("请选择：");
       scanf("%d", &choice);
       if(choice <=0 || choice > 3)
       {
           printf("只能输入1-3之间的数字！请重新输入：\n");
       }
    }while(choice <=0 || choice > 3);
    switch(choice)
    {
    case 1:
        printf("您选择了生命中的唯一，然而老九君已经看穿了一切！\n");
        break;
    case 2:
        printf("您是个花心大萝卜！\n");
        break;
    case 3:
         printf("100元每位，江浙沪包邮！\n");
        break;
    }
    return 0;
}
