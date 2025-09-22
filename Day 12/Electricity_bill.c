#include<stdio.h>
int main()
{
    int a,f;
    printf("Enter units:\n");
    scanf("%d",&a);
    if(a>=1&&a<=100){
        f=a*5;
    }
    if (a>100&&a<=200){
        f=500;
        int f1=a-100;
        f+=(f1*7);
    }
    if(a>200&&a<300){
        f=1200;
        int f1=a-200;
        f+=f1*10;
    }
    if(a>300){
        f=2200;
        int f1=a-300;
        f+=f1*2;
    }
    printf("Bill is %d units",f);
    return 0;
}