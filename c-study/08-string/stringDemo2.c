#include <stdio.h>
#include <string.h>
/**

*/

int main()
{
    char str1[50];
    char str2[20];
    printf("输入目的字符串：");
    gets(str1);
    printf("输入源字符串：");
    gets(str2);
    strcpy(str1,str2);
    printf("***复制后***\n");
    printf("目的字符串：%s\n",str1);
    printf("源字符串：%s\n",str2);
    return 0;
}
