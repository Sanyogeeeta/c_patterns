/*
*
**
***
****
*****
*/
#include<stdio.h>
void main(){
//simple approach
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
printf("\n");
}
//optimal approach
for (int i = 1; i <= 5; i++) {
        printf("%.*s\n",i , "*****");
    }
}