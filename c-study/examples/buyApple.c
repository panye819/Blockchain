#include <stdio.h>
/**
    ������ƻ����
        ������ƻ����ÿ��ƻ��0.8Ԫ����һ��������ƻ�����ڶ��쿪ʼÿ����ǰһ���
        2����ֱ�������ƻ������Ϊ������100�����ֵ��������ÿ��ƽ��������Ǯ��
*/

int main()
{
    int day = 0;
    int mount = 1;
    float money = 0;
    float ave = 0;
    while(mount*2<100)
    {
        day++;
        mount = mount *2;
        money+=0.8*mount;
        printf("��%d��,����%d��ƻ�����ܻ�����%.6f\n",day,mount,money);
        printf("---------------------------------------------------\n");
    }
    ave = money/day;
    printf("һ������%d��,����%d��ƻ�����ܻ�����%.6f\n",day,mount,money);
    printf("The avg_cost is %.6f\n",ave);
    return 0;

}

