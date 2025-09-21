#include<stdio.h>
int main()
{
    int a;
    printf("Enter grades:\n");
    scanf("%d",&a);
    if (a>=90&&a<=100){
        printf("Grade A");
    }
    else if((a<89)&&(a>=80)){
        printf("Grade B");
    }
    else if((a<79)&&(a>=70)){
        printf("Grade C");
    }
    else if((a<69)&&(a>=60)){
        printf("Grade D");
    }
    else if((a<60)){
        printf("Grade F");
    }
    return 0;
}