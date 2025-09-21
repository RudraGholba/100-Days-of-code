#include <stdio.h>
int main()
{
    int c;
    printf("Enter temprature in Celsius\n");
    scanf("%d",&c);
    int f;
    f=(c*(1.8)+32);
    printf("Fahrenheit=%d\n",f);
    return 0;
}
