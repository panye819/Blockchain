#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
    ������
        ������ض�����Ķ����������
        �﷨�������˺����Ľṹ��ʹ�÷�ʽ
        �ŵ㣺
            1������ʡȥ��д�ظ�����Ŀ���
            2�������ó������ģ�黯����ߴ���ɶ���
            3����������޸ġ�����
*/
int main()
{
    //0��ʾ�٣���0��ʾ��
    int num = 1024;
    char ch1 = '9';
    char ch2 = 'a';
    char ch3 = 'A';
    printf("islower()\t%d\n",islower(ch2));
    printf("isupper()\t%d\n",isupper(ch3));
    printf("isdigit()\t%d\n",isdigit(num));//����ֵΪ�٣�
    printf("isdigit()\t%d\n",isdigit(ch1));//����ֵΪ�棬
    printf("isalpha()\t%d\n",isalpha(ch2));
    //ת����Сд
    printf("��д��%c\n", toupper(ch2));
    printf("Сд��%c\n", tolower(ch3));

    //����Ǹ����������෴��
    printf("Ceil: %.2lf\n", ceil(98.1)); //���Ͻ�һ����һ��
    printf("Floor: %.2lf\n", floor(98.1)); //ȡ����ȥβ��
    printf("Sqrt: %.2lf\n", sqrt(16)); //��ƽ��
    printf("Pow: %.2lf\n", pow(2,4)); //�׳�
    return 0;
}
