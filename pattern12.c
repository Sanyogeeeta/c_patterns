#include<stdio.h>
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void main(){
 for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }
    printf("\n");
 }   
}