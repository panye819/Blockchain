#include <stdio.h>


int main()
{
    double bubble()
    {
        double array_demo[5] = {11,1,111,2,23};
        double temp = 0;
        for(int i = 0 ;i<5;i++)
        {
            for(int j =1; j<5-i;j++)
            {
                if(array_demo[j-1]<array_demo[j])
                {
                    temp = array_demo[j-1];
                    array_demo[j-1] = array_demo[j];
                    array_demo[j] = temp;
                }
            }
        }
        printf("进行冒泡排序之后的数组为：\n");
        for(int i = 0; i<5;i++)
        {
            printf("第%d位元素是%.2lf\n",i+1,array_demo[i]);
        }

    }
    bubble();
    return 0;
}
