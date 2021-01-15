#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char input[101];
    int arr[26];
    int i,j;
    fgets(input, 101, stdin);
    input[strlen(input)-1] = '\0';
    for(i=0;i<26;i++){
        arr[i] = -1;
    }
    for(i='a';i<'z';i++){
        for(j=0;j<strlen(input);j++){
            if(i==input[j]){
                arr[input[j]-'a'] = j;
                break;
            }
        }
    }
    for(i=0;i<26;i++){
        printf("%d", arr[i]);
        if(i<25){
            printf(" ");
        }
    }
    return 0;
}