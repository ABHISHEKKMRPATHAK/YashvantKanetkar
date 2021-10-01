#include<stdio.h>
void factor(int);
void main(){
    int number;
    printf("Enter number of which factor is to be calculated : \n");
    scanf("%d",&number);
   factor(number);
}
void factor(x){
    int i;
    for(i=1;i<=x;i++){
        if(x%i==0)
        printf("%d\t",i);
    }
}