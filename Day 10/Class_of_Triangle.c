#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter sides of the triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&a==c&&b==c){
        printf("Equlatral Triangle");
    }
    else if (a==b||b==c||a==c){
        printf("Isosceles Triangle");
    }
    //Following code is work in progress
    //int si= sqrt(a);
    //int sii=sqrt(b);
    //int siii=sqrt(c);
    //int v= si+sii;
    //int n= siii+si;
    //int m= sii+siii;
    //if((v==siii)||(n==sii)||(m==si)){
    //    printf("Right Angled Triangle");
    //}
    else{
        printf("Scalene Triangle");
    }
    return 0;
}