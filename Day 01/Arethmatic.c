#include <stdio.h>

int main()
{
    int a,sum=0, sub=0, multi=0, divi=0;
    printf("Enter a number\n");
    scanf("%d", &a);
    int b;
    printf("Enter another number\n");
    scanf("%d", &b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    divi=a/b;
    printf("Addition=%d", sum);
    printf("\nSubtraction=%d", sub);
    printf("\nMultiplication=%d", multi);
    printf("\nDivision=%d\n", divi);
    return 0;
}
