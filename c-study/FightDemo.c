#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    //ʹ��ʱ����Ϊ���ӣ�������һ���������
    srand((unsigned) time(NULL));
    //rand()������ȡֵ��Χ��0-32767
    printf("%d\n", rand());
//    return 0;
    /**
    ʹ��ѭ��ģ��ʵ����Ҷ�ս��
        ˫����ʼHP��Ϊ100
        ÿ�ι���5-15
        HP���ȵ�������µı�KO
    */
    int hp1 =100 ,hp2 = 100;
    int att1, att2;
    int round = 0;
    while(hp1 >=0 && hp2 >=0)
    {
        //Ĭ��1p���ȹ���
        att1 = rand() % 11 +5;
        att2 = rand() %11 +5;
        //���1���������2��Ѫ
        hp2 -= att1;
        hp1 -= att2;
        if(hp1<=5 || hp2<=5)
        {
             printf("KO!~��Ϸ���������1��Ѫ����%d\t���2��Ѫ����%d\n",hp1,hp2);
             break;
        }
        printf("***********************************************\n");
        printf("��%d�֣�\n", round);
        printf("���1��������%d,���2ʣ��Ѫ����%d\n", att1, hp2);
        printf("���2��������%d,���1ʣ��Ѫ����%d\n", att2, hp1);
        printf("***********************************************\n");
        round++;
        Sleep(1000);


    }


}
