#include <stdio.h>
#include <stdlib.h>

/**
    malloc():
        全称是memory allocation，中文叫动态内存分配，当无法知道内存具体位置的时
        候，想要绑定真正的内存空间，就需要用到动态的内存分配。
        分配长度为num bytes字节的内存块
        如果分配成功则返回指向被分配内存的指针（此存储去中的初始值不确定），
        否则则返回空指针NULL；
        当内存不再使用时，应使用free()函数将内存块释放(原始内存中的数据保持不变)
*/
int main()
{
    //0表示假，非0表示真

    printf("这里是普通文字，非常普通！\n");
    return 0;
}
