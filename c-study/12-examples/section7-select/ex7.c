#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("请输入两个整数：\n");
    scanf("%d%d",&a,&b);
    int result1 = a*a+b*b;
    int result2 = a+b;
    if(result1>100){
        printf("a*a+b*b = %d",result1);
    }else{
        printf("a+b = %d",result2);
    }
	return 0;
}
