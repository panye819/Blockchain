#include <stdio.h>
#include <math.h>

int main()
{
    float s1,s2,s3,s4,min,max;
    printf("«Î ‰»Î4∏ˆ≥…º®£∫\n");
    scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
    min=max=s1;
    if(s2<min ){
        min=s2;
    }else if(s2>max){
        max=s2;
    }
    if(s3<min ){
        min=s3;
    }else if(s3>max){
        max=s3;
    }
    if(s4<min ){
        min=s4;
    }else if(s4>max){
        max=s4;
    }
    printf("min=%3.2f max=%3.2f\n",min,max);
	return 0;
}
