#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mount ,m1,m2,m;
    char  kind,service;
    printf("请选择你要加的油量，种类(a,b,c)及服务：\n");
    scanf("%f,%c,%c",&mount,&kind,&service);
    switch(kind){
        case 'a':
            m1 = 3.25;
            break;
        case 'b':
            m1 = 3.00;
            break;
        case 'c':
            m1 = 2.75;
            break;
    }
    switch(service){
        case 'n':
            m2 = 0;
            break;
        case 'm':
            m2 = 0.05;
            break;
        case 'e':
            m2 = 0.1;
            break;
    }
    m = mount*m1-mount*m1*m2;
    printf("您选择的汽油数量是：%d\n",mount);
    printf("您选择的汽油种类是：%c\n",kind);
    printf("您选择的服务等级是：%c\n",service);
    printf("您应该支付的金额是：%.3f\n",kind);
    return 0;
}
