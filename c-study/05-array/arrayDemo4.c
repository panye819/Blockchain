#include <stdio.h>

/**
*/
int main()
{
    double powers[5] = {42322,45771,40907,41234,40767};
    int count = 5;
    double deletePower; //�û�Ҫɾ����ս��ֵ
    double insertPower; //�û�Ҫ�����ս��ֵ
    int deleteIndex = -1; //�û�Ҫɾ����ս��ֵ���±�
    int i; //ѭ������
    printf("������Ҫɾ����ս��ֵ: ");
    scanf("%lf", &deletePower);
    for(i=0;i<count;i++)
    {
        if(deletePower == powers[i])
        {
            deleteIndex = i;
            break;
        }
    }
    //�����жϣ��Ƿ��ҵ�����ִ�к����Ĳ���
    if(-1 == deleteIndex)
    {
        printf("���ź���û���ҵ�Ҫɾ����ս��ֵ��ɾ��ʧ��\n");
    }else
    {
        printf("�ҵ���Ҫɾ����ս��ֵ��׼������ɾ��������\n");
        for(i= deleteIndex;i<count -1;i++)
        {
            powers[i] = powers[i+1];
        }
        count--;
    }
    printf("ɾ��֮���ս�����ǣ� \n");
    for(i=0;i<count;i++)
    {
        printf("��%dλս��ֵ�ǣ�%.2lf \n", i+1,powers[i]);
    }

    printf("��������Ҫ�����ս��ֵ��");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    printf("����ս��ֵ֮���ս�����ǣ� \n");
    for(i=0;i<count;i++)
    {
        printf("��%dλս��ֵ�ǣ�%.2lf \n", i+1,powers[i]);
    }

    return 0;
}
