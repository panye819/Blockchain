#include <stdio.h>

int main()
{
    int age=0;
    int error_count=0;
    for(int i=0;i<5;i++)
    {
        printf("请输入你的年龄：\n");
        scanf("%d",&age);
        if(age<0)
        {
            error_count++;
            continue;
        }

    }
       printf("您一共输入了%d次错误的值\n",error_count);
}
