#include <stdio.h>
#include <string.h>
/**
*/
int main()
{
    char* str = NULL;
    char myStr[100] = "";
//    printf("��������Ҫ������ַ�����");
//    scanf("%s",myStr);

//    str = &myStr;
    strcat(myStr,"123");
    //����������ɳ����쳣
    strcat(str,"123");
    printf("str = %s\n",str);
    printf("myStr = %s\n",myStr);

	return 0;
}
