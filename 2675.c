#include <stdio.h>
#include <string.h>

int main(){
    int input,i,j,k;
    int num=0, len = 0; 
    scanf("%d", &input);
    getchar();
    for(i=0;i<input;i++){
        char str[21] = {0};
        scanf("%d %s", &num, str);
        len = strlen(str);
        for(j=0;j<len;j++){
            for(k=0;k<num;k++){
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}