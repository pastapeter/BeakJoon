#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int sequence[26]= { 0 };
    char input[1000001];
    scanf("%s", input);
    int Max=0, cnt =0, index=0;
    int i,j;
    int len = strlen(input);
    int allen = strlen(alpha);
    for(i=0;i<len;i++){
        if(isupper(input[i])){
            input[i] = input[i] + 32;            
        }
        for(j=0;j<allen;j++){
            if(input[i]==alpha[j]){
                sequence[j]++;
            }
        }
    }
    for(i=0;i<26;i++){
        if(Max<sequence[i]){
            Max = sequence[i];
        }
    }
    for(i=0;i<26;i++){
        if(Max == sequence[i]){
            index = i;
            cnt++;
        }
    }
    if(cnt>1){
        printf("?");
    }
    else{
        printf("%c", alpha[index]-32);
    }
}