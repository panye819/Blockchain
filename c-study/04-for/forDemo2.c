#include <stdio.h>

int main()
{
//    const int N = 20;
    double salary = 0;
    double total_salary = 0;
	for(int i=1;i<=6;i++)
    {
        printf("�������%d�¹��ʣ�\n",i);
        scanf("%d", &salary);
        total_salary += salary;
    }
    double avarage_salary = total_salary /6;
    printf("�����ܹ����ǣ�%d\n", total_salary);
    printf("����ƽ�������ǣ�%d\n",total_salary);
}
