#include <stdio.h>
#define ROW 3
#define COL 3
/**
    ��Ϸ����
        1����Ϸһ������10��
        2��ÿ�����øжȣ�һ�������������ϵ������øжȵ���60����������
            ��Ϸ������
*/
int main()
{
    double score[4][3] = {
        {98,67,89},
        {89,67,88},
        {99,77,55},
        {78,99,67}
    };
    for(int i = 0;i<4;i++)
    {
        for(int j =0 ;j<3;j++)
        {
            printf("��%dλͬѧ�ĵ�%d�ųɼ��ǣ�%.2lf\n", i+1,j+1,score[i][j]);
        }
        printf("\n");
    }
    return 0;
}
