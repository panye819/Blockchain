#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mount ,m1,m2,m;
    char  kind,service;
    printf("��ѡ����Ҫ�ӵ�����������(a,b,c)������\n");
    scanf("%f,%c,%c",&mount,&kind,&service);
    switch(kind){
        case 'a':
            m1 = 3.25;
            break;
        case 'b':
            m1 = 3.00;
            break;
        case 'c':
            m1 = 2.75;
            break;
    }
    switch(service){
        case 'n':
            m2 = 0;
            break;
        case 'm':
            m2 = 0.05;
            break;
        case 'e':
            m2 = 0.1;
            break;
    }
    m = mount*m1-mount*m1*m2;
    printf("��ѡ������������ǣ�%d\n",mount);
    printf("��ѡ������������ǣ�%c\n",kind);
    printf("��ѡ��ķ���ȼ��ǣ�%c\n",service);
    printf("��Ӧ��֧���Ľ���ǣ�%.3f\n",kind);
    return 0;
}
