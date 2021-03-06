#include <stdio.h>
/**
    指针是一个值为内存地址的变量（或数据对象）
        类型标识符 * 指针变量名
        在定义指针时，一个*只能代表一个指针
        一个类型的指针只能指向同类型的变量，
        而在指针赋值时，不能带*
    内存地址一般用16进制表示
    指针变量 = &变量，表示将变量的地址赋给指针变量
    指针变量的引用：
        1、通过指针间接地访问变量：
            int nData = 100;
            int * pnData = &nData;
            printf("%d\n", *pnData);

*/
int main()
{
    int num;
    int * ptr_num = &num;
    //指针的地址
    int * ptr_num2 = &ptr_num;
	printf("num变量的地址是：%p\t%x\n", ptr_num,&num);
    printf("*ptr_num对应的值是：%d\n", *ptr_num);
    printf("指针ptr_num的地址是：%p\n", ptr_num2);
    //如何通过指针的指针，访问到原指针指向的空间呢？
//    printf("原空间num对应的值是：%d\n", **ptr_num2);
	//使用指针修改变量值
	*ptr_num = 9999;
	printf("*ptr_num对应的值是：%d\n", *ptr_num);
	return 0;
}
