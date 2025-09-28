#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int e;
    for(int i=0;i<=(a+2);++i){
        if ((a%10)!=0){
            int b=a%10;
            printf("%d",b);
            int c=((a-b)/10);
            a=c;
        }
        else{
            for(int i=1;i<a;++i){
                if(a%10==0){
                    a=a/10;
                    e=a;
                }
            }
            for(int i=0;i<=a;++i){
                if ((a%10)!=0){
                    int b=a%10;
                    printf("%d",b);
                    int c=((a-b)/10);
                    a=c;
                }
            }
        }
    }
    return 0;
}