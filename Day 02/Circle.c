#include <stdio.h>
#define PI 3.1415;
int main()
{
    int r;
    printf("Enter Radius\n");
    scanf("%d",&r);
    float c;
    c=2*r*PI;
    float a;
    a=r*r*PI;
    printf("Circumference of Circle is %f\n", c);
    printf("Area of Circle is %f\n", a);
    return 0;
}
