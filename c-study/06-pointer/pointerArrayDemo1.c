#include <stdio.h>
/**
    һ������ΪT��ָ����ƶ�����sizeof(T)Ϊ�ƶ���λ
    ������������������ڴ浥Ԫ���׵�ַ
    �����i+1��Ԫ�ؿ��Ա�ʾΪ��
        1����i+1��Ԫ�صĵ�ַ�ǣ�&num[i+1] ����num+i+1
        2����i+1��Ԫ�ص�ֵ�ǣ�num[i+1]��*(num+i+1)
    Ϊָ�������ָ�븳ֵ��
        int * ptr_num = num �� int * ptr_num = &num[0]
    ָ���������ָ������Ԫ�أ�
        int * ptr_num = &num[4] ��int * ptr_num = num + 4
*/
int main()
{
    int i;
    double score[5] = {98,87,65,43,76};
    //score��ֵ��&score[0]�ĵ�ַ��һ����
    double * ptr_score;
    ptr_score = score;
    for(i=0;i<5;i++)
    {
        printf("%.2lf\n", *ptr_score++);
    }
	return 0;
}
