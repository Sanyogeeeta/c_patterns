#include<stdio.h>
/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
void main(){
    int temp;
    for(int i=0;i<5;i++){
        for(int k=1;k<=5-i;k++){
            printf(" ");
        }
    for(int j=0;j<=i;j++){
        if(i==0||j==0)
            temp=1;
        else
            temp=temp*(i-j+1)/j;
        printf("%d ",temp);
    }
printf("\n");
}
}