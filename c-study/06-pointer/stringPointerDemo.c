#include <stdio.h>
/**
       �ַ������ʾ�ַ���
       ���ַ���ָ��ָ��һ���ַ�����Ҳ���Ա�ʾһ���ַ���
       ָ��ָ������ַ������׵�ַ

*/
int main()
{
    char* str = "hello";
    char str1[10]= "hello";

    str1[1] = 'E';
    printf("str1 = %s\n", str1);

    str[1] = 'E';
    //����������ɳ��������Ϊstr������ջ����ֵ�����������������ڳ������޷��޸�
    printf("str = %s\n", str);
	return 0;
}
