#include <stdio.h>
int main()
{
    int s;
    printf("Enter time in seconds.\n");
    scanf("%d",&s);
    int m,h;
    float h1,m1;
    h1=s/3600;
    m1=s/60;
    printf("Hour=%.2f, Minute=%.2f, Second=%d",h1,m1,s);
    return 0;
}
