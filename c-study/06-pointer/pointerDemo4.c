#include <stdio.h>
/**
        �������������ַ�ʽ��
            1���±귨���ʣ�
                ������[�±�] ָ��[ָ��ָ��λ�õ�ƫ����]
            2��ָ�뷨���ʣ�
                *(array+0) *(array+1)
        �������ǵ�ַ���������ܽ����Լ����㡣
*/
int main()
{
    double salarys[5] = {1500,2000.43,1202.78,8000.32,5000};
    for(int i = 0;i<5;i++)
    {
        printf("salarys �е�%d��Ԫ����%.2lf\n",i+1,salarys[i]);
    }
    double *p = salarys;
    printf("�����е�һ��Ԫ�صĵ�ַ�ǣ�%p\n",salarys);
    printf("������׵�ַ�ǣ�%p\n",salarys);
    printf("���������һ��Ԫ�صĵ�ַ�ǣ�%p\n",p+4);
    printf("���������һ��Ԫ�صĵ�ַ�ǣ�%p\n",salarys+4);
    printf("---------------------------------------------\n");
    double * head = &salarys[0];
    double * tail = &salarys[4];
    printf("head : %p,tail: %p",head,tail);
    printf("---------------------------------------------\n");
    printf("value in head:%.2lf, value in tail: %.2lf\n",*head,*tail);
    printf("number between head and tail is : %ld\n",tail-head);
    double head_change = *head -50;
    printf("*head after change: %.2lf\n",head_change);
    printf("%.2lf\n",*(head+2));
    head = &salarys[0];
    for(int i = 0;i<5;i++)
    {
        printf("*(head+%d): %.2lf\n",i, *(head+i));
    }
    printf("---------------------------------------------\n");
    for(int i = 0; i<5;i++)
    {
        printf("*(tail-%d): %.2lf\n",i, *(tail-i));
    }

	return 0;
}
