#include <stdio.h>

int main()
{
    int num =0;
    printf("请输入您希望的数字：");
    scanf("%d", &num);
    for(int i=1;i<10;i++)
    {
        if(i%2 !=0)
        {
            printf("%d*%d= %d\t\t",i,num,i*num);
        }
        if(i%2 == 0)
        {
            printf("%d*%d= %d\n",i,num,i*num);

        }
    }


}
