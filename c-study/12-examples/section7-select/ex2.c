#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
	printf("请输入一个字符：\n");
	ch = getchar();
	if(ch>=65 && ch<=90){
        printf("字符%c是大写\n",ch);
	}else{
        printf("字符%c不是大写\n",ch);
	}
}
