#include <stdio.h>

int main(){
    int h,m;
    scanf("%d %d", &h,&m);
    if(h>=0&&h<=23 && m>=0 && m<=59){
        if(m>=45){
            printf("%d %d", h, m-45);    
        }
        else{
            if(h!=0){
                printf("%d %d", h-1, m+15);
            }
            else{
                printf("%d %d", 23, m+15);
            }
        }
    }
    
}