#include <stdio.h>
/**
        访问数组有两种方式：
            1、下标法访问：
                数组名[下标] 指针[指针指向位置的偏移量]
            2、指针法访问：
                *(array+0) *(array+1)
*/
int main()
{
    int array[5] = {1,2,3,4,5};
    int *p = array;
    printf("p[0] = %d\n",p[0]);
    printf("p[1] = %d\n",p[1]);
    printf("array[2] = %d\n",*(array+2));

    /**

    */
	return 0;
}
