#include <stdio.h>
/**
    指针是一个值为内存地址的变量（或数据对象）
    内存地址一般用16进制表示
*/
int main()
{
    int num1 = 1024;
    int num2 = 2048;
    int * ptr1;
    int * ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1的值是%d\tnum1的地址是：%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是：%p\n", num2, ptr2);

    *ptr2 = *ptr1;
//    num2 = num1;
    printf("重新赋值后：\n");
    printf("num1的值是%d\tnum1的地址是：%p\n", num1, ptr1);
    printf("num2的值是%d\tnum2的地址是：%p\n", num2, ptr2);

	return 0;
}
