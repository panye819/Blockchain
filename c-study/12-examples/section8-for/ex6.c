#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    int count=0;
    printf("请输入20个成绩：\n");
    for(int i=0;i<5;i++){
        scanf("%d",&score);
        if(score<60){
            count++;
        }
    }
    printf("一共有%d个同学，该门成绩不及格！\n",count);
    return 0;
}
