#include <stdio.h>
int main()
{
    int sp,cp;
    printf("Enter SP:\n");
    scanf("%d",&sp);
    printf("Enter CP:\n");
    scanf("%d",&cp);
    if (cp>sp){
        int l=(100-((sp*100)/cp));
        printf("Loss of %d units",l);
    }
    else if (sp>cp){
        int p=((sp*100)/cp-100);
        printf("Profit of %d units",p);
    }
    else if(cp==sp){
        printf("No profit No loss");
    }
    return 0;
}