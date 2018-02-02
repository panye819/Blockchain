#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**

*/
enum GCZcolor
{
    //成员列表，要求使用纯大写字母
    Red,
    Blue,
    White

};
void showMyFavoriteColor(enum GCZcolor color)
{
    switch(color){
    case Red:
        printf("我喜欢红色\n");
        break;
    case Blue:
        printf("我喜欢蓝色\n");
        break;
    case White:
        printf("我喜欢白色\n");
        break;
    default:
        printf("我的世界里只有黑白。。。。\n");
        break;
}
}
int main()
{
    //使用结构体
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
