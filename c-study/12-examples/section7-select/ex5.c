#include <stdio.h>
#include <stdlib.h>

int main()
{
    int button;
    system("cls");
    printf("********************\n");
    printf("* ��ѡ��İ���     *\n");
    printf("*  1. �ɿ���       *\n");
    printf("*  2. ����         *\n");
    printf("*  3. �ɿڿ���     *\n");
    printf("********************\n");
    printf("��1~3��ѡ�񰴼���\n");
    scanf("%d",&button);
    switch(button){
        case 1:
            printf("��ѡ�����ɿ���\n");
            break;
        case 2:
            printf("��ѡ���˵���\n");
            break;
        case 3:
            printf("��ѡ���˿ɿڿ���\n");
            break;
        default:
            printf("��ʲô��ô��ѡ�񣬳����˳�������\n");
    }
	return 0;
}
