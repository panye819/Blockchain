#include <stdio.h>

int main()
{
   int i = 0;
   int password;

   while(i<3)
   {
       printf("请输入密码：");
       scanf("%d",&password);
       if(123456 != password)
       {
           printf("密码输入错误，当前是地%d次尝试输入。\n",i+1);
           i++;
       }else
       {
           printf("欢迎您再次光临本站。。。。");
           break;
       }

   }
}
