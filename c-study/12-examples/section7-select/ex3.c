#include <stdio.h>
#include <math.h>

int main()
{
    char c;
	printf("������һ���ַ���\n");
	scanf("%c",&c);
	if(c>=65 && c<=90){
        printf("�ַ�%c�Ǵ�д�ַ�\n",c);
	}else if(c>=97&&c<=122){
        printf("�ַ�%c��Сд�ַ�\n",c);
	}else if(c>=48&& c<=57){
        printf("�����������\n");
	}else{
        printf("��������������\n");
	}
	return 0;
}
