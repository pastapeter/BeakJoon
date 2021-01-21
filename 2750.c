#include <stdio.h>
#include <stdlib.h>

int main(){
    int input,i,j;
    int temp = 0;
    scanf("%d", &input);
    int* array = (int*)malloc(sizeof(int)*input);
    for(i=0;i<input;i++){
        scanf("%d", &array[i]);
    }
    for(i=0;i<input;i++){
        for(j=0;j<input-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    for(i=0;i<input;i++){
        printf("%d\n", array[i]);
    }
}