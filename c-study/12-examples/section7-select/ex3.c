#include <stdio.h>
#include <math.h>

int main()
{
    char c;
	printf("请输入一个字符：\n");
	scanf("%c",&c);
	if(c>=65 && c<=90){
        printf("字符%c是大写字符\n",c);
	}else if(c>=97&&c<=122){
        printf("字符%c是小写字符\n",c);
	}else if(c>=48&& c<=57){
        printf("输入的是数字\n");
	}else{
        printf("输入的是特殊符号\n");
	}
	return 0;
}
