#include <stdio.h>

int main()
{
    int age=0;
    int error_count=0;
    for(int i=0;i<5;i++)
    {
        printf("������������䣺\n");
        scanf("%d",&age);
        if(age<0)
        {
            error_count++;
            continue;
        }

    }
       printf("��һ��������%d�δ����ֵ\n",error_count);
}
