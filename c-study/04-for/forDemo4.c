#include <stdio.h>

int main()
{
    int num =0;
    printf("��������ϣ�������֣�");
    scanf("%d", &num);
    printf("�ӷ���\n");

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
