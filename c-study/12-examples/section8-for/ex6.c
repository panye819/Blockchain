#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    int count=0;
    printf("������20���ɼ���\n");
    for(int i=0;i<5;i++){
        scanf("%d",&score);
        if(score<60){
            count++;
        }
    }
    printf("һ����%d��ͬѧ�����ųɼ�������\n",count);
    return 0;
}
