#include <stdio.h>

int main()
{
   int i = 0;
   int password;

   while(i<3)
   {
       printf("���������룺");
       scanf("%d",&password);
       if(123456 != password)
       {
           printf("����������󣬵�ǰ�ǵ�%d�γ������롣\n",i+1);
           i++;
       }else
       {
           printf("��ӭ���ٴι��ٱ�վ��������");
           break;
       }

   }
}
