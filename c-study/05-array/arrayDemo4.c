#include <stdio.h>

/**
*/
int main()
{
    double powers[5] = {42322,45771,40907,41234,40767};
    int count = 5;
    double deletePower; //用户要删除的战力值
    double insertPower; //用户要插入的战力值
    int deleteIndex = -1; //用户要删除的战力值的下标
    int i; //循环变量
    printf("请输入要删除的战力值: ");
    scanf("%lf", &deletePower);
    for(i=0;i<count;i++)
    {
        if(deletePower == powers[i])
        {
            deleteIndex = i;
            break;
        }
    }
    //根据判断（是否找到），执行后续的操作
    if(-1 == deleteIndex)
    {
        printf("很遗憾，没有找到要删除的战力值，删除失败\n");
    }else
    {
        printf("找到需要删除的战力值，准备进行删除。。。\n");
        for(i= deleteIndex;i<count -1;i++)
        {
            powers[i] = powers[i+1];
        }
        count--;
    }
    printf("删除之后的战力表是： \n");
    for(i=0;i<count;i++)
    {
        printf("第%d位战力值是：%.2lf \n", i+1,powers[i]);
    }

    printf("请输入你要插入的战力值：");
    scanf("%lf", &insertPower);
    powers[count] = insertPower;
    count++;
    printf("插入战力值之后的战力表是： \n");
    for(i=0;i<count;i++)
    {
        printf("第%d位战力值是：%.2lf \n", i+1,powers[i]);
    }

    return 0;
}
