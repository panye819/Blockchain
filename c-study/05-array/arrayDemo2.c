#include <stdio.h>

/**
*/
int main()
{
    int i;
    int sum=0;
    double avg;
    int flag = 0;
    int searchNum;
    int nums[7] = {8,4,2,1,23,344,12};
    for(i=0;i<7;i++)
    {
        printf("第%d位的元素是： %d\n",i+1,nums[i]);
    }

    for(i=0;i<7;i++)
    {
        printf("进行第%d次相加...\n", i+1);
        sum += nums[i];
        printf("第%d次相加之后的和为: %d\n",i+1,sum);
    }
    printf("数组中元素的和为：%d",sum);
    avg = sum/7.0;
    printf("数组中元素的平均值为：%d\n",sum/7);
    printf("请输入你要查找的数字：");
    scanf("%d",&searchNum);
    for(i=0;i<7;i++)
    {
        if(searchNum == nums[i])
        {
            printf("猿粪啊，找到了相同的元素!\n");
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        printf("茫茫人海，没有找到合意的数字！\n");
    }
    return 0;
}
