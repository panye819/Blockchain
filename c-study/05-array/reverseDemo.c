#include <stdio.h>

/**
    ð������
        ����ԭ��
            �����뽻��

*/
int main()
{
    int i;
    int j;
    double scores[5] = {111,1,11,2,22};
    for(i=0;i<5;i++)
    {
        printf("��%dλ����Ϊ��%.2lf\n",i+1, scores[i]);
    }
    printf("׼�����������������������");
    for(i=0;i<5/2;i++)
    {
        double temp;
        temp = scores[i];
        scores[i] = scores[5-i-1];
        scores[5-i-1]= temp;
    }
    printf("���й��������֮��������ǣ�\n");
    for(i=0;i<5;i++)
    {
        printf("��%dλ����Ϊ��%.2lf\n",i+1, scores[i]);
    }
    return 0;

}
