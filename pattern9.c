#include<stdio.h>
/*
    *
   * *
  * * *
 * * * *
  * * *
   * *
    *

*/
void main(){
    for(int i=1;i<=5;i++){
        int t1=i*2-1;
        int t2=5-i+1;
        printf("%.*s",t2,"     ");
        printf("%.*s\n",t1,"*********");
    }
    for(int i=4;i>0;i--){
        int t1=i*2-1;
        int t2=5-i+1;
        printf("%.*s",t2,"     ");
        printf("%.*s\n",t1,"*********");
    }
}