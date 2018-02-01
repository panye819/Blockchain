#include <stdio.h>
#include <string.h>
/**
*/
int main()
{
    char* str = NULL;
    char myStr[100] = "";
//    printf("请输入你要输入的字符串：");
//    scanf("%s",myStr);

//    str = &myStr;
    strcat(myStr,"123");
    //下面语句会造成程序异常
    strcat(str,"123");
    printf("str = %s\n",str);
    printf("myStr = %s\n",myStr);

	return 0;
}
