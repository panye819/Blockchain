#include <stdio.h>

/**
*/
int main()
{
    int i;
    int sum=0;
    double avg;
    int flag = 0;
    int searchNum;
    int nums[7] = {8,4,2,1,23,344,12};
    for(i=0;i<7;i++)
    {
        printf("��%dλ��Ԫ���ǣ� %d\n",i+1,nums[i]);
    }

    for(i=0;i<7;i++)
    {
        printf("���е�%d�����...\n", i+1);
        sum += nums[i];
        printf("��%d�����֮��ĺ�Ϊ: %d\n",i+1,sum);
    }
    printf("������Ԫ�صĺ�Ϊ��%d",sum);
    avg = sum/7.0;
    printf("������Ԫ�ص�ƽ��ֵΪ��%d\n",sum/7);
    printf("��������Ҫ���ҵ����֣�");
    scanf("%d",&searchNum);
    for(i=0;i<7;i++)
    {
        if(searchNum == nums[i])
        {
            printf("Գ�డ���ҵ�����ͬ��Ԫ��!\n");
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        printf("ãã�˺���û���ҵ���������֣�\n");
    }
    return 0;
}
