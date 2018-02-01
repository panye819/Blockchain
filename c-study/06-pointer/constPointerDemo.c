#include <stdio.h>
/**
       const修饰指针：
        1、const int * p
            值不可改变
        2、int const *p
            值不可改变
        3、int * const p
            指向不可改变
        4、const int * const p
            指向和值均不可改变
        *左边修饰的是指针指向的变量不可修改
        *右边修饰的是指针变量不可修改
*/
int main()
{
    int a = 19;
    //可以修改指向，但值不可以改变
    const int *p;
    p = &a;
//    *p = 20; 重新赋值会报错
    const int * const p3 = &a;
//    *p3 = 9;重新赋值会报错
	return 0;
}
