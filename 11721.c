#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    fgets(input, 101, stdin);
    input[strlen(input)-1]= '\0';
    char* s;
    s= input;
    int i;
    for(i=0;i<strlen(input);i++){
        printf("%c",*s);
        s++;
        if(i%10==9){
            printf("\n");
        }
    }


}