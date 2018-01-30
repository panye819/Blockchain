#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    结构：
        结构是一种构造数据类型，由若干项组合而成
        struct StructName
        {
            //结构成员
            DataType var1;
            DataType var2;
            //....
        }
        注意点：
            1、结构定义并不预留内存
            2、结构定义一般放在程序的开始部分（头文件声明之后）
            3、结构定义仅用来描述结构的形式，使用结构需要声明结构变量
*/
struct Hero
{
    int id;
    char name[50];
    int level;
    int hp;
    int mp;
    char skill[50];
};
int main()
{
    //使用结构体
    struct Hero hero1;
    hero1.id = 1;
    strcpy(hero1.name, "德玛西亚之力");
    hero1.level=5;
    hero1.hp = 500;
    hero1.mp = 100;
    strcpy(hero1.skill, "大保健");
    printf("%d\t%s\t%d\t%d\t%d\t%s\n",hero1.id,hero1.name,hero1.level,hero1.hp,hero1.mp,hero1.skill);
    printf("-----------------------------------------------\n");
    struct Hero hero2 = {2,"祥林嫂",10,1000,.skill="祥林嫂之光"};
    printf("%d\t%s\t%d\t%d\t%d\t%s\n",hero2.id,hero2.name,hero2.level,hero2.hp,hero2.mp,hero2.skill);
    return 0;
}
