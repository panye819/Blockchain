#include <stdio.h>
/**
       字符数组表示字符串
       用字符串指针指向一个字符串，也可以表示一个字符串
       指针指向的是字符串的首地址

*/
int main()
{
    char* str = "hello";
    char str1[10]= "hello";

    str1[1] = 'E';
    printf("str1 = %s\n", str1);

    str[1] = 'E';
    //下面语句会造成程序错误，因为str储存在栈区，值储存在数据区，属于常量，无法修改
    printf("str = %s\n", str);
	return 0;
}
