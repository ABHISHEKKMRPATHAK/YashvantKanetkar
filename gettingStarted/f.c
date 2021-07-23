#include<stdio.h>
int main(){
    int i,height=1189 , width=841,flag ;
    printf("dimension of A0 is : %d * %d \n",height,width);
    for(i=1;i<9;i++){
       flag =width;
       width = height/2;
       height = flag;
       printf("dimension of A%d is : %d * %d\n",i,height,width);
    }
    height=width;
    return 0 ;
}