#include <stdio.h>
/**
       指针与函数
            函数的返回值是个指针：
                函数的返回值类型必须定义为指针类型。

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
