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
        printf("�������%dλ���֣�",i+1);
        scanf("%lf",&scores[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("��%dλ����Ϊ��%.2lf\n",i+1, scores[i]);
    }

    return 0;

}
