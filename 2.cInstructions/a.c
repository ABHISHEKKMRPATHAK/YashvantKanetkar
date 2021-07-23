/* Sum of five digit numbers*/
#include<stdio.h>
int main(){
    int i,number,sum=0;
    printf("Enter a FIVE digit number of your choice : ");
    scanf("%d",&number);
     for (i=1;i<6;i++){
         sum=sum+number%10;
         number= number/10;
     }
     printf("sum of its digit is :%d \n",sum);
     return 0;
}