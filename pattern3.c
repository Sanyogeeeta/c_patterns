#include<stdio.h>
/*
     *
    ***
   *****
  *******
 *********
*/
void main(){
    //simple approach
    for(int i=1;i<=5;i++){
    for(int k=1;k<=5-i;k++){
        printf(" ");
    }
    for(int j=1;j<2*i;j++){
        printf("*");
    }
printf("\n");
}
    //optimalapproach
    for(int i=1;i<=5;i++){
        int t1=i*2-1;
        int t2=5-i+1;
        printf("%.*s",t2,"     ");
        printf("%.*s\n",t1,"*********");
    }
}