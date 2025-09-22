#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for (int i=0;i<a;++i){
        int ii=i+1;
        printf("%d ",ii);
    }
    return 0;
}