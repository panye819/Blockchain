#include <stdio.h>
#include <string.h>
/**

*/

int main()
{
    char str1[50];
    char str2[20];
    printf("����Ŀ���ַ�����");
    gets(str1);
    printf("����Դ�ַ�����");
    gets(str2);
    strcpy(str1,str2);
    printf("***���ƺ�***\n");
    printf("Ŀ���ַ�����%s\n",str1);
    printf("Դ�ַ�����%s\n",str2);
    return 0;
}
