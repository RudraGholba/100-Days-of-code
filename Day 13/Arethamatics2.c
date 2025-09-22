#include <stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter numbers and sign:\n");
    scanf("%d %d %c",&a,&b,&c);
    int d;
    if (c=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if(c=='-'){
        d=a-b;
        printf("%d",d);
    }
    else if(c=='*'){
        d=a*b;
        printf("%d",d);
    }
    else if(c=='/'){
        d=a/b;
        printf("%d",d);
    }
    else if(c=='%'){
        d=a%b;
        printf("%d",d);
    }
    return 0;
}