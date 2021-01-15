#include <stdio.h>


long long func(int *a, int n){
    int i;
    long long total =0;
    for(i=0;i<n;i++){
        total = total+a[i];
    }
    return total;
}

int main(){
    int a[1000000]=0;
    int n;
    scanf("%d", &n);
    func(a[1000000],n);
}