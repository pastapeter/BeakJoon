#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char input[10];
    fgets(input, 10, stdin);
    input[strlen(input)-1]='\0';
    int i;
    char a[4], b[4];
    int str1, str2;
    for(i=0;i<3;i++){
        a[i] = input[2-i];
    }
    str1 = atoi(a);
    for(i=0;i<3;i++){
        b[i] = input[6-i];
    }
    str2 = atoi(b);

    if(str1>str2) printf("%d",str1);
    else printf("%d", str2);
    
}