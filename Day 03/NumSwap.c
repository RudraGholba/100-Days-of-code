// The following code is incomplete.
#include <stdio.h>
#include <string.h>
int main()
{
    char num[];
    printf("Enter two numbers with a space\n");
    scanf("%s",&num);
    char *s;
    s=strtok(num," ");
    while (s!= NULL){
       printf("%s",s);
       s=strtok(NULL,"-");
    }

    return 0;
}

