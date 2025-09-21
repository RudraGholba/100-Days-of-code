#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    switch(a){
        case(1):
        printf("Jan, 31 days");
        break;
        case(2):
        printf("Feb, 28 days");
        break;
        case(3):
        printf("March, 31 days");
        break;
        case(4):
        printf("April, 30 days");
        break;
        case(5):
        printf("May, 31 days");
        break;
        case(6):
        printf("June, 30 days");
        break;
        case(7):
        printf("July, 31 days");
        break;
        case(8):
        printf("Aug, 31 days");
        break;
        case(9):
        printf("Sept, 30 days");
        break;
        case(10):
        printf("Oct, 31 days");
        break;
        case(11):
        printf("Nov, 30 days");
        break;
        case(12):
        printf("Dec, 31 days");
        break;
    }
    return 0;
}