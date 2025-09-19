#include<stdio.h>
int main()
{
    char a[5];
    printf("Enter a alphabet:\n");
    scanf("%s",&a);
    int i=0;
    char v[]={'a','e','i','o','u'};
    while(i<5){
        if(v[i]==a[0]){
            printf("Alphabet is a Vowel");
            break;
        }
        else if(i==4){
            printf("Alphabet is a Consonant");
            break;
        }
        else{
            i+=1;
        }
    }
    return 0;
}