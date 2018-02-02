#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char  c;
    printf("请输入运算格式：a+(-,*,/)b \n");
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
                printf("除数不能是零\n");
                break;
            }else{
                printf("%f/%f = %f\n",a,b,a/b);
                break;
            }
        default:
            printf("输入有误！\n");
    }
    return 0;
}
