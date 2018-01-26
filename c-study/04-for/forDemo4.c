#include <stdio.h>

int main()
{
    int num =0;
    printf("请输入您希望的数字：");
    scanf("%d", &num);
    printf("加法表：\n");

    for(int i=0;i<num;i++)
    {
        printf("%d + %d= %d",i,num-i,num);
        if(i%2 !=0)
        {
            printf("\n");
        }else{
             printf("\t");
        }

    }


}
