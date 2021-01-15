#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
   int len,i;
   int total=0;
   char str[101];
   scanf("%d\n%s", &len, str);
   for(i=0;i<len;i++){
       total += (str[i]- '0');
   }
   printf("%d", total);
}