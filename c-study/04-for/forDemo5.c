#include <stdio.h>

int main()
{
    int good_price = 223;
    int guess_price;
    int guess_count=0;
    for(;;)
    {
        printf("请输入你猜测的商品价格：\n");
        scanf("%d",&guess_price);
        if(guess_price==good_price)
        {
            printf("你猜的价格就是商品实际价格，恭喜你才对了！！！\n");
            guess_count++;
            break;
        }else if(guess_price>good_price){
            printf("你猜的价格大于商品实际价格，请继续：\n");
        }else
        {
            printf("你猜的价格小于商品实际价格，请继续：\n");
        }
        guess_count++;
    }
        printf("您一共猜了%d次\n",guess_count);
}
