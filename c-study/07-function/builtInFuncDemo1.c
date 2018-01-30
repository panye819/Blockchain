#include <stdio.h>
#include <ctype.h>
#include <math.h>

/**
    函数：
        是完成特定任务的独立程序代码
        语法规则定义了函数的结构和使用方式
        优点：
            1、可以省去编写重复代码的苦闷
            2、可以让程序更加模块化，提高代码可读性
            3、方便后期修改、完善
*/
int main()
{
    //0表示假，非0表示真
    int num = 1024;
    char ch1 = '9';
    char ch2 = 'a';
    char ch3 = 'A';
    printf("islower()\t%d\n",islower(ch2));
    printf("isupper()\t%d\n",isupper(ch3));
    printf("isdigit()\t%d\n",isdigit(num));//返回值为假，
    printf("isdigit()\t%d\n",isdigit(ch1));//返回值为真，
    printf("isalpha()\t%d\n",isalpha(ch2));
    //转换大小写
    printf("大写：%c\n", toupper(ch2));
    printf("小写：%c\n", tolower(ch3));

    //如果是负数，规律相反，
    printf("Ceil: %.2lf\n", ceil(98.1)); //向上进一，进一法
    printf("Floor: %.2lf\n", floor(98.1)); //取整，去尾法
    printf("Sqrt: %.2lf\n", sqrt(16)); //开平方
    printf("Pow: %.2lf\n", pow(2,4)); //阶乘
    return 0;
}
