#include <stdio.h>
/**
    字符串：
        一个或多个字符的序列成为字符串
        双引号不是字符串的一部分，仅用来告知编译器括起来的是字符串
        c语言中，字符串是由字符数组存储的
*/

int main()
{
    //定义字符串的方式：
    //字符串与字符数组的区别在于最后一位是否是空字符
    char names1[] = {'j','a','c','k','\0'};
    char names2[] = "jack";
    char * names3 = "jack";

    printf("请输入新名称：\n");
    scanf("%s", names2);
    printf("新名称是：%s\n", names2);
    return 0;
}
