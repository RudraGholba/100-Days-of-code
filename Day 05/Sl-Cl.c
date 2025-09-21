#include <stdio.h>
#include <math.h>
int main()
{
    int p;
    printf("Enter Principle value\n");
    scanf("%d",&p);
    float r;
    printf("Enter Rate\n");
    scanf("%f",&r);
    int t;
    printf("Enter Time\n");
    scanf("%d",&t);
    int si;
    si=(p*r*t)/100;
    float r1;
    r1=((r/100.0)+1);
    float ex;
    ex=pow(r1, t);
    float ci;
    ci=((p*ex)-p);
    printf("Simple intrest is %d\nCompound intrest is %.2f ",si,ci);
    return 0;
}
