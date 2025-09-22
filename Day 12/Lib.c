#include<stdio.h>
int main()
{
    int a,f;
    printf("Enter days:\n");
    scanf("%d",&a);
    if(a>=1&&a<=5){
        f=a*2;
    }
    if (a>5&&a<=10){
        f=10;
        int f1=a-5;
        f+=(f1*4);
    }
    if(a>10&&a<30){
        f=30;
        int f1=a-10;
        f+=f1*6;
    }
    if(a>=31){
        printf("Membership cancelled");
    }
    if(a<30){
        printf("Fine is %d units",f);
    }

    return 0;
}