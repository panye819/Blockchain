#include <stdio.h>

int main()
{
/**
    ����������
    �ڲ��������
*/
    int i,j;
    for(int i=0;i<4;i++)
    {
           for(j=0;j<=2-i;j++)
           {
               printf("%c",' ');
           }
           for(j=0;j<=i*2;j++)
           {
              if(i == 0 || i == 3|| j==0||j==2*i)
              {
                  printf("%c", '*');
              }else{
                  printf("%c", ' ');
              };
           }
           printf("\n");
    }
        for(int i=0;i<3;i++)
    {
           for(j=0;j<=i;j++)
           {
               printf("%c",' ');
           }
           for(j=0;j<=i*2;j++)
           {
              if(i == 0 || i == 3|| j==0||j==2*i)
              {
                  printf("%c", '*');
              }else{
                  printf("%c", ' ');
              };
           }
           printf("\n");
    }

    return 0;
}
