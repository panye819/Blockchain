#include <stdio.h>
/**
       const����ָ�룺
        1��const int * p
            ֵ���ɸı�
        2��int const *p
            ֵ���ɸı�
        3��int * const p
            ָ�򲻿ɸı�
        4��const int * const p
            ָ���ֵ�����ɸı�
        *������ε���ָ��ָ��ı��������޸�
        *�ұ����ε���ָ����������޸�
*/
int main()
{
    int a = 19;
    //�����޸�ָ�򣬵�ֵ�����Ըı�
    const int *p;
    p = &a;
//    *p = 20; ���¸�ֵ�ᱨ��
    const int * const p3 = &a;
//    *p3 = 9;���¸�ֵ�ᱨ��
	return 0;
}
