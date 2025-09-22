#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int b=1;
    for (int i=1;i<=a;++i){
        int ii=i%2;
        if(ii==0){
            b=b*i;
        }
    }
    printf("%d",b);
    return 0;
}