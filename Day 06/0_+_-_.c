#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if (n==0){
        printf("Number is 0");
    }   
    else if(n<0){
        printf("Number is -ve");
    }   else {
        printf("Number is +ve");
    }
    return 0;
}