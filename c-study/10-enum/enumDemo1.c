#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**

*/
enum GCZcolor
{
    //��Ա�б�Ҫ��ʹ�ô���д��ĸ
    Red,
    Blue,
    White

};
void showMyFavoriteColor(enum GCZcolor color)
{
    switch(color){
    case Red:
        printf("��ϲ����ɫ\n");
        break;
    case Blue:
        printf("��ϲ����ɫ\n");
        break;
    case White:
        printf("��ϲ����ɫ\n");
        break;
    default:
        printf("�ҵ�������ֻ�кڰס�������\n");
        break;
}
}
int main()
{
    //ʹ�ýṹ��
    enum  GCZcolor myColor;

    myColor = Blue;
    showMyFavoriteColor(myColor);
    myColor = White;
    showMyFavoriteColor(myColor);
    myColor = Red;
    showMyFavoriteColor(myColor);
    myColor = 19;
    showMyFavoriteColor(myColor);
    ;
//    printf("myColor is : %d\n",myColor);
    return 0;
}
