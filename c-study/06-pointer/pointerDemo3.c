#include <stdio.h>
/**
        �������������ַ�ʽ��
            1���±귨���ʣ�
                ������[�±�] ָ��[ָ��ָ��λ�õ�ƫ����]
            2��ָ�뷨���ʣ�
                *(array+0) *(array+1)
*/
int main()
{
    int array[5] = {1,2,3,4,5};
    int *p = array;
    printf("p[0] = %d\n",p[0]);
    printf("p[1] = %d\n",p[1]);
    printf("array[2] = %d\n",*(array+2));

    /**

    */
	return 0;
}
