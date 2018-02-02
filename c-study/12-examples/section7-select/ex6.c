#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base_salary = 500;
    float profit;
    float total_salary;
    printf("请输入员工这个月的销售额：\n");
    scanf("%f",&profit);
    if(profit>0&&profit<=2000){
        total_salary = base_salary;
        printf("该员工的工资为%5.2f\n",total_salary);
    }else if(profit>2000&&profit<=5000){
        total_salary = base_salary+profit*0.08;
        printf("该员工的工资为%5.2f\n",total_salary);
    }else if(profit>5000&&profit<=10000){
        total_salary = base_salary+profit*0.1;
        printf("该员工的工资为%5.2f\n",total_salary);
    }else{
        total_salary = base_salary+profit*0.12;
        printf("该员工的工资为%5.2f\n",total_salary);
    }
	return 0;
}
