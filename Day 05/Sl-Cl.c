//This code is incomplete
#include <stdio.h>
#include <math.h>
int main()
{
    int p;
    printf("Enter Principle value\n");
    scanf("%d",&p);
    int r;
    printf("Enter Rate\n");
    scanf("%d",&r);
    int t;
    printf("Enter Time\n");
    scanf("%d",&t);
    int si;
    si=p*r*t;
    int r1;
    r1=(r+1);
    int ex;
    ex=pow(r1, t);
    float ci;
    ci=((p*ex)-p);
    printf("Simple intrest is %d\nCompound intrest id%f ",si,ci);
    return 0;
}