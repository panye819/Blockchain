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
    printf("׼������ð�����򡣡�������");
    for(i=0;i<5;i++)
    {
        double temp = 0.0;
        for(j=0;j<5-i;j++)
        {
            if(scores[j]<scores[j+1])
                {
                    temp = scores[j];
                    scores[j] = scores[j+1];
                    scores[j+1] = temp;
                }
        }

    }
    printf("���й�ð������֮��������ǣ�\n");
    for(i=0;i<5;i++)
    {
        printf("��%dλ����Ϊ��%.2lf\n",i+1, scores[i]);
    }
    return 0;

}
