#include <stdio.h>
#define PI 3.1415926

int main()
{
    int findElement(double find_element)
    {
        double  array_demo[5]= {1,2,3,4,5};
        int flag = 0;
        int find_element_index = 0;
        printf("��������Ҫ���ҵ�Ԫ�أ�\n");
        scanf("%lf", &find_element);
        for(int i = 0 ;i<5;i++)
        {
            if(find_element == array_demo[i])
            {
                printf("����ҵ�Ԫ�����ҵ������±�Ϊ%d\n", i);
                find_element_index = i;
                flag = 1;
            }
        }
        if (0==flag)
        {
             printf("����ҵ�Ԫ��δ�ҵ�\n");
        }
    }
    findElement(1);
    return 0;
}
