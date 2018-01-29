#include <stdio.h>

int main()
{
/**
    外层控制行数
    内层控制列数
*/
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<=1-i;j++)
        {
            printf("%c", ' ');
        }
        for(j=0;j<=2*i;j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==2)
            {
               printf("%c", '*');
            }else{
               printf("%c", ' ');
            }
        }
        printf("\n");
    }
    return 0;
}
