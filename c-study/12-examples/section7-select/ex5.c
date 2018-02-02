#include <stdio.h>
#include <stdlib.h>

int main()
{
    int button;
    system("cls");
    printf("********************\n");
    printf("* 可选择的按键     *\n");
    printf("*  1. 巧克力       *\n");
    printf("*  2. 蛋糕         *\n");
    printf("*  3. 可口可乐     *\n");
    printf("********************\n");
    printf("从1~3中选择按键：\n");
    scanf("%d",&button);
    switch(button){
        case 1:
            printf("您选择了巧克力\n");
            break;
        case 2:
            printf("您选择了蛋糕\n");
            break;
        case 3:
            printf("您选择了可口可乐\n");
            break;
        default:
            printf("您什么都么有选择，程序退出。。。\n");
    }
	return 0;
}
