#include <stdio.h>
/**
       ָ���뺯��
            ָ�������Ϊ�������ݸ�������
                ��ָ�������ʵ�ε���ʽ���ݸ����������е��ǵ�ַ�Ĵ��ݣ����Կ�����
                �����иı�ʵ�ε�ֵ��

*/
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int nVal1 = 10;
    int nVal2 = 20;
    Swap(&nVal1,&nVal2);
    printf("nVal1 : %d\n", nVal1);
    printf("nVal2 : %d\n", nVal2);
	return 0;
}
