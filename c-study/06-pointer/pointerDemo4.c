#include <stdio.h>
/**
        访问数组有两种方式：
            1、下标法访问：
                数组名[下标] 指针[指针指向位置的偏移量]
            2、指针法访问：
                *(array+0) *(array+1)
        数组名是地址常量，不能进行自加运算。
*/
int main()
{
    double salarys[5] = {1500,2000.43,1202.78,8000.32,5000};
    for(int i = 0;i<5;i++)
    {
        printf("salarys 中第%d个元素是%.2lf\n",i+1,salarys[i]);
    }
    double *p = salarys;
    printf("数组中第一个元素的地址是：%p\n",salarys);
    printf("数组的首地址是：%p\n",salarys);
    printf("数组中最后一个元素的地址是：%p\n",p+4);
    printf("数组中最后一个元素的地址是：%p\n",salarys+4);
    printf("---------------------------------------------\n");
    double * head = &salarys[0];
    double * tail = &salarys[4];
    printf("head : %p,tail: %p",head,tail);
    printf("---------------------------------------------\n");
    printf("value in head:%.2lf, value in tail: %.2lf\n",*head,*tail);
    printf("number between head and tail is : %ld\n",tail-head);
    double head_change = *head -50;
    printf("*head after change: %.2lf\n",head_change);
    printf("%.2lf\n",*(head+2));
    head = &salarys[0];
    for(int i = 0;i<5;i++)
    {
        printf("*(head+%d): %.2lf\n",i, *(head+i));
    }
    printf("---------------------------------------------\n");
    for(int i = 0; i<5;i++)
    {
        printf("*(tail-%d): %.2lf\n",i, *(tail-i));
    }

	return 0;
}
