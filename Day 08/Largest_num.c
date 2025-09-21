#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 nums:\n");
    scanf("%d %d %d",&a,&b,&c);
    int d[3]={a,b,c};
    int l=d[0];
    for(int i=0;i<=3;++i){
        if (a<d[i]){
            if (d[i]>l){
                l=d[i];
            }
        }
        else if(i==3){
            int l;
            a=l;
        }
    }
    printf("Largest number is %d",l);
    return 0;
}