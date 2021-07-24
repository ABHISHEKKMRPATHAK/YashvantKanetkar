/* Calculation of absolute value of input Number */
#include<stdio.h>
int main(){
    int absoluteValue , number;
    printf("Enter a number of your choice \t :");
    scanf("%d",&number);
      
      if(number==0){
          absoluteValue = 0;
      }
         
         if(number>0){
             absoluteValue=number;
     }
      
          if(number<0){
              absoluteValue= -1*number;
          }
          
          printf("ABSOLUTE VALUE OF INPUT IS \t :%d",absoluteValue);
     
     return 0 ;
}