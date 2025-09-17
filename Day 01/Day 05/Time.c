//Work in progress
#include <stdio.h>
int main()
{
    int s;
    printf("Enter time in seconds.\n");
    scanf("%d",&s);
    int m;
    int h;
    if (s>60){
        while(m>60){
            m=s/60;
        }
        if (m>60){
            while(h>60){
                h=m/60;
            }
        }
    }
    printf("Hour=%d, Minute=%d, Second=%d",h,m,s);
    return 0;
}
