#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three roots:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Same roots;%d",a);
    }
    else if (a==b){
        if(c>=0)
        {
            printf("Diffrent root=%d",c);
        }
        printf("Same roots:%d",a);   
    }
    else if(a==c){
        if (b>=0){
            printf("Diffrent root is:%d ",b);
        }
        printf("Same roots:%d",c);
    }
    else if(b==c){
        if (a>=0){
            printf("Diffrent root is:%d",a);
        }
        printf("Same roots:%d",b);
    }
    else{
        if(a>=0&&b>=0&&c>=0){
            printf("Complex roots:%d %d %d",a,b,c);
        }
    }
    return 0;
}