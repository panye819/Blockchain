#include <stdio.h>

int main()
{
    int good_price = 223;
    int guess_price;
    int guess_count=0;
    for(;;)
    {
        printf("��������²����Ʒ�۸�\n");
        scanf("%d",&guess_price);
        if(guess_price==good_price)
        {
            printf("��µļ۸������Ʒʵ�ʼ۸񣬹�ϲ��Ŷ��ˣ�����\n");
            guess_count++;
            break;
        }else if(guess_price>good_price){
            printf("��µļ۸������Ʒʵ�ʼ۸��������\n");
        }else
        {
            printf("��µļ۸�С����Ʒʵ�ʼ۸��������\n");
        }
        guess_count++;
    }
        printf("��һ������%d��\n",guess_count);
}
