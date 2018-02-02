#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    员工信息管理系统
*/
struct Staff{
    char name[20];
    int years;
    int age;
};
//录入员工信息
void scanfStaff(struct Staff* staff){
    printf("请输入员工姓名：\n");
    scanf("%s", staff->name);
    printf("请输入员工工龄：\n");
    scanf("%d",&staff->years);
    printf("请输入员工年龄：\n");
    scanf("%d",&staff->age);
}
void scanfMessage(struct Staff array[] ,int nLength){
    for(int i =0 ;i<nLength;i++){
        scanfStaff(&array[i]);
    }
}
//按年龄排序
int compareWithAge(struct Staff s1, struct Staff s2){
    return s1.age > s2.age;
}
//按工龄排序
int compareWithYears(struct Staff s1, struct Staff s2){
    return s1.years > s2.years;
}
//排序函数
void sortStaffArray(struct Staff* pArray,int nLength,int(*pCompare)
                    (struct Staff s1,struct Staff s2)){

        for(int i = 1;i<=nLength;i++){
            for(int j = 0;j<nLength-i;j++){
                if(pCompare(pArray[j],pArray[j+1])){
                    struct Staff temp = pArray[j];
                    pArray[j] = pArray[j+1];
                    pArray[j+1] = temp;
                }
            }
        }
}
//打印员工信息
void showStaff(struct Staff s){
     printf("Name:%s\n",s.name);
     printf("age:%d\n",s.age);
     printf("years:%d\n",s.years);
     printf("----------------------------------\n");
}
//打印员工数组
void showStaffArray(struct Staff array[],int nLength){
    for(int i = 0;i<nLength;i++){
        showStaff(array[i]);
    }
}
int main()
{
    //使用结构体
    struct Staff staffArray[5];
    scanfMessage(staffArray ,5);
    showStaffArray(staffArray,5);
    sortStaffArray(staffArray,5,compareWithAge);
    printf("按照年龄排序后的员工信息如下：\n");
    showStaffArray(staffArray,5);
    printf("-----------------------------\n");
    sortStaffArray(staffArray,5,compareWithYears);
    printf("按照工龄排序后的员工信息如下：\n");
    showStaffArray(staffArray,5);
    return 0;
}
