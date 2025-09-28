#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int b=1;
    for(int i=1;i<=a;++i){
        b=b*i;
    }
    printf("n!=%d",b);
    return 0;
}