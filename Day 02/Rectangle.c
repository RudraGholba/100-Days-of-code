#include <stdio.h>

int main()
{
    int L;
    printf("Enter Length of rectangle\n");
    scanf("%d",&L);
    int B;
    printf("Enter Breadth of rectangle\n");
    scanf("%d",&B);
    int area;
    int peri;
    area=L*B;
    peri=2*(L+B);
    printf("Perimeter is %d\n",peri);
    printf("Area is  %d\n", area);
    return 0;
}
