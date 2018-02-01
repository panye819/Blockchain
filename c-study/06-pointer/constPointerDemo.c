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
        const在*左边：
            修饰的是指针指向的内存
                a、变量不可修改
                b、不可以通过指针修改其所指向内存的值
        const在*右边：
            修饰的是指针变量本身
                a、指针不可以改变指向
                b、可以通过指针修改其所指向内存的值
        *左右都有const:
            a、指针不可以改变指向
            b、不可以通过指针修改其所指向内存的值
        变量本身仍可以通过变量名去修改
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
