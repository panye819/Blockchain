#include <stdio.h>
#define PI 3.1415926

int main()
{
    int findElement(double find_element)
    {
        double  array_demo[5]= {1,2,3,4,5};
        int flag = 0;
        int find_element_index = 0;
        printf("请输入你要查找的元素：\n");
        scanf("%lf", &find_element);
        for(int i = 0 ;i<5;i++)
        {
            if(find_element == array_demo[i])
            {
                printf("你查找的元素已找到，其下标为%d\n", i);
                find_element_index = i;
                flag = 1;
            }
        }
        if (0==flag)
        {
             printf("你查找的元素未找到\n");
        }
    }
    findElement(1);
    return 0;
}
