#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    �ṹ��
        �ṹ��һ�ֹ����������ͣ�����������϶���
        struct StructName
        {
            //�ṹ��Ա
            DataType var1;
            DataType var2;
            //....
        }
        ע��㣺
            1���ṹ���岢��Ԥ���ڴ�
            2���ṹ����һ����ڳ���Ŀ�ʼ���֣�ͷ�ļ�����֮��
            3���ṹ��������������ṹ����ʽ��ʹ�ýṹ��Ҫ�����ṹ����
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
    //ʹ�ýṹ��
    struct Hero hero1;
    hero1.id = 1;
    strcpy(hero1.name, "��������֮��");
    hero1.level=5;
    hero1.hp = 500;
    hero1.mp = 100;
    strcpy(hero1.skill, "�󱣽�");
    printf("%d\t%s\t%d\t%d\t%d\t%s\n",hero1.id,hero1.name,hero1.level,hero1.hp,hero1.mp,hero1.skill);
    printf("-----------------------------------------------\n");
    struct Hero hero2 = {2,"����ɩ",10,1000,.skill="����ɩ֮��"};
    printf("%d\t%s\t%d\t%d\t%d\t%s\n",hero2.id,hero2.name,hero2.level,hero2.hp,hero2.mp,hero2.skill);
    return 0;
}
