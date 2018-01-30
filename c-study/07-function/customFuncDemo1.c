#include <stdio.h>
#define PI 3.1415926

int main()
{
    double calcCircle(double r)
    {
        double result = PI * r * r ;
        printf("圆的面积是：%.2lf\n",result);
    }

    double calcSqure(double width, double height)
    {
        double result = width * height;
        printf("方形的面积是：%.2lf\n",result);
    }

    double calcTriangle(double width, double height)
    {
        double result = width * height/2;
        printf("三角形的面积是：%.2lf\n",result);
    }
    calcCircle(4);
    calcSqure(4,4);
    calcTriangle(4,4);
    return 0;
}
