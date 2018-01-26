#include <stdio.h>

int main()
{
//    const int N = 20;
    double salary = 0;
    double total_salary = 0;
	for(int i=1;i<=6;i++)
    {
        printf("请输入第%d月工资：\n",i);
        scanf("%d", &salary);
        total_salary += salary;
    }
    double avarage_salary = total_salary /6;
    printf("您的总工资是：%d\n", total_salary);
    printf("您的平均工资是：%d\n",total_salary);
}
