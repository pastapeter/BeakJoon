#include <stdio.h>

int main(){
    int input,i;
    scanf("%d", &input);
    for(i=1;i<10;i++){
        printf("%d * %d = %d", input, i ,i*input);
        if(i!=9){
            printf("\n");
        }
    }
}