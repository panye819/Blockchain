#include <stdio.h>
/**
       ָ���뺯��
            �����ķ���ֵ�Ǹ�ָ�룺
                �����ķ���ֵ���ͱ��붨��Ϊָ�����͡�

*/
int * findMaxFunc(int a, int b)
{
    int *resultp = NULL;
    if(a>b)
    {
        resultp = &a;
        printf("resultp: %d\n",*resultp);
    }else{
        resultp = &b;
        printf("resultp: %d\n",*resultp);
    }
}

int main()
{
    int nVal1 = 10;
    int nVal2 = 20;
    findMaxFunc(nVal1,nVal2);
//    printf("resultp : %d\n",*resultp);
	return 0;
}
