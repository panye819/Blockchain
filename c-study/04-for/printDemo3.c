#include <stdio.h>

int main()
{
/**
    ����������
    �ڲ��������
*/
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
          {
              if(i==0 || i==7)
              {
                 printf("%c", '*');
              }else{
                  if(j==0 ||j ==7)
                  {
                     printf("%c", '*');
                  }else{
                     printf("%c", ' ');
                  }
              }
          }
        printf("\n");
        }

    return 0;
}
