#include <stdio.h>
int main()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    int s;
    s=a*(a+1)/2;
    printf("Sum of first %d numbers is %d\n", a,s);
    return 0;
}
