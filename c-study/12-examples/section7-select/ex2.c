#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
	printf("������һ���ַ���\n");
	ch = getchar();
	if(ch>=65 && ch<=90){
        printf("�ַ�%c�Ǵ�д\n",ch);
	}else{
        printf("�ַ�%c���Ǵ�д\n",ch);
	}
}
