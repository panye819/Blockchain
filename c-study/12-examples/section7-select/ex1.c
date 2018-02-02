#include <stdio.h>

int main()
{
    int a=0;
	printf("请输入一个整数：");
	scanf("%d",&a);
	if(a%2 == 0){
        printf("The number %d 是个偶数\n",a);
	}else{
        printf("The number %d 不是偶数...",a);
	}
}
