#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
    Ա����Ϣ����ϵͳ
*/
struct Staff{
    char name[20];
    int years;
    int age;
};
//¼��Ա����Ϣ
void scanfStaff(struct Staff* staff){
    printf("������Ա��������\n");
    scanf("%s", staff->name);
    printf("������Ա�����䣺\n");
    scanf("%d",&staff->years);
    printf("������Ա�����䣺\n");
    scanf("%d",&staff->age);
}
void scanfMessage(struct Staff array[] ,int nLength){
    for(int i =0 ;i<nLength;i++){
        scanfStaff(&array[i]);
    }
}
//����������
int compareWithAge(struct Staff s1, struct Staff s2){
    return s1.age > s2.age;
}
//����������
int compareWithYears(struct Staff s1, struct Staff s2){
    return s1.years > s2.years;
}
//������
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
//��ӡԱ����Ϣ
void showStaff(struct Staff s){
     printf("Name:%s\n",s.name);
     printf("age:%d\n",s.age);
     printf("years:%d\n",s.years);
     printf("----------------------------------\n");
}
//��ӡԱ������
void showStaffArray(struct Staff array[],int nLength){
    for(int i = 0;i<nLength;i++){
        showStaff(array[i]);
    }
}
int main()
{
    //ʹ�ýṹ��
    struct Staff staffArray[5];
    scanfMessage(staffArray ,5);
    showStaffArray(staffArray,5);
    sortStaffArray(staffArray,5,compareWithAge);
    printf("��������������Ա����Ϣ���£�\n");
    showStaffArray(staffArray,5);
    printf("-----------------------------\n");
    sortStaffArray(staffArray,5,compareWithYears);
    printf("���չ���������Ա����Ϣ���£�\n");
    showStaffArray(staffArray,5);
    return 0;
}
