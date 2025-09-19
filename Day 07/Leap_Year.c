#include <stdio.h>
int main()
{
    int n;
    printf("Enter year:\n");
    scanf("%d",&n);
    if (n%4==0, n%100!=0){
        printf("Leap year");
    }   else if(n%400==0){
        printf("Leap Year");
    }   else{
        printf("Non-leap year");
    }
    return 0;
}