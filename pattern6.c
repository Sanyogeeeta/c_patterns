#include<stdio.h>
/*
* * * * *
* *   * *
*   *   *
* *   * *  
* * * * * 
*/
void main(){
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    if(i==j||j==4-i||i==4-j||i==0||j==0||j==4||i==4)
    printf("* ");
    else
    printf("  ");
    }
    printf("\n");
}
}