#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int choice;
   //��ӡ��Ϸ�˵�
    printf("�Ը���ԣ�\n");
    printf("���������Ϊ�������������Եİ�����ϣ������\n");
    printf("1��ֻҪ��һλ�䰮������\n");
    printf("2����������λ���ϵİ���\n");
    printf("3��ӵ����ǧ����\n");

    //�û���ѡ��

    do{
       printf("��ѡ��");
       scanf("%d", &choice);
       if(choice <=0 || choice > 3)
       {
           printf("ֻ������1-3֮������֣����������룺\n");
       }
    }while(choice <=0 || choice > 3);
    switch(choice)
    {
    case 1:
        printf("��ѡ���������е�Ψһ��Ȼ���Ͼž��Ѿ�������һ�У�\n");
        break;
    case 2:
        printf("���Ǹ����Ĵ��ܲ���\n");
        break;
    case 3:
         printf("100Ԫÿλ�����㻦���ʣ�\n");
        break;
    }
    return 0;
}
