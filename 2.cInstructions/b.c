/* reverse of five digit number */
#include<stdio.h>
int main(){
    int number,rem,    revNumber,i,j;
    printf("Enter a Five digit number of your choice : ");  
    printf("Revese of entered number is : \n");
    scanf("%d",&number);
    for(i=1;i<6;i++){
        rem=number%10;
        number=number/10;
        printf("%d",rem);
    }
    return 0;

}