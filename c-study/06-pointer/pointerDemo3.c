#include <stdio.h>
/**
    ָ����һ��ֵΪ�ڴ��ַ�ı����������ݶ���
    �ڴ��ַһ����16���Ʊ�ʾ
*/
int main()
{
    int num;
    int * ptr_num = &num;
    //ָ��ĵ�ַ
    int * ptr_num2 = &ptr_num;
	printf("num�����ĵ�ַ�ǣ�%p\t%x\n", ptr_num,&num);
    printf("*ptr_num��Ӧ��ֵ�ǣ�%d\n", *ptr_num);
    printf("ָ��ptr_num�ĵ�ַ�ǣ�%p\n", ptr_num2);
    //���ͨ��ָ���ָ�룬���ʵ�ԭָ��ָ��Ŀռ��أ�
//    printf("ԭ�ռ�num��Ӧ��ֵ�ǣ�%d\n", **ptr_num2);
	//ʹ��ָ���޸ı���ֵ
	*ptr_num = 9999;
	printf("*ptr_num��Ӧ��ֵ�ǣ�%d\n", *ptr_num);
	return 0;
}
