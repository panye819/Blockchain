#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char  c;
    printf("�����������ʽ��a+(-,*,/)b \n");
    scanf("%f",&a);
    scanf("%c",&c);
    scanf("%f",&b);
    switch(c){
        case '+':
            printf("%f+%f = %f\n",a,b,a+b);
            break;
        case '-':
            printf("%f-%f = %f\n",a,b,a-b);
            break;
        case '*':
            printf("%f*%f = %f\n",a,b,a*b);
            break;
        case '/':
            if(!b){
                printf("������������\n");
                break;
            }else{
                printf("%f/%f = %f\n",a,b,a/b);
                break;
            }
        default:
            printf("��������\n");
    }
    return 0;
}
