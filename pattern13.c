#include<stdio.h>
/*
* * * * * 
 * * * * *
* * * * * 
 * * * * *
*/
void main(){
    for(int i=0;i<4;i++){
        if(!(i%2==0))
            printf(" ");
        printf("* * * * *\n");
    }
}