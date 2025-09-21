#include<stdio.h>
int main()
{
    char ch[5];
    printf("Enter char:\n");
    scanf("%s",&ch);
    int i=1;
    char s[20]={'!','@','#','$','%','&','*',',','.','?','-','+','=','-','_'};
    if (('a'<=ch[0]&&ch[0]<='z')) {
        printf("Lower Case");
    }   
    else if(('A'<=ch[0]&&ch[0]<='Z')) {
        printf("Upper Case");
    }
    else if(i<15){ 
        while(i<15){
            if (s[i]==ch[0]){
                printf("Special Char");
                break;
            }
            else if(i>=14){
                printf("Digit");
                break;
            }
            else{
                i+=1;
            }
        }
    }
    return 0;
}