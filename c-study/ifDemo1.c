#include <stdio.h>

int main()
{
    double price1 = 229.0;
    double price2 = 10240.55;
    double price3 = 2345.3;
    double total = price1 + price2 + price3;
    double discount;

    if(price1 > 1000 || price2 > 1000 || price3 > 1000 || total > 5000)
    {
        discount = 0.3;
    }
     total = discount *  total;
     printf("败家娘们应该支付的金额为：%.2lf\n", total);
}
