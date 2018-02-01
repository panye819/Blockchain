#include <stdio.h>
/**
       指针与函数
            指针变量作为参数传递给函数：
                将指针变量以实参的形式传递给函数，进行的是地址的传递，所以可以在
                函数中改变实参的值。

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
