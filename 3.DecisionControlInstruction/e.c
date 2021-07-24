/* to reverse a 5 digit number  and detrmine reverse is equal to original or not */
#include<stdio.h>
int main(){
    int inputNumber,realNumber,remainder,i,reversedNumber=0,j;
        printf("Enter a five digit number : \t");
          scanf("%d",&inputNumber);
               realNumber=inputNumber;

        for(i=1;i<6;i++){
                for(j=10000;j>0;j=j/10){
                      remainder=inputNumber%10;
                            inputNumber=inputNumber/10;
                                    reversedNumber=reversedNumber+remainder*j;
                             }   
        }      
        printf("\nREVERSED OF THIS NUMBER IS : \t%d\n",reversedNumber);
             if(realNumber==reversedNumber)
                 printf("\n<<<<Reverse is EQUAL to original number>>>>\n");
                  else
                       printf("\n<<<<Reverse is NOT EQUAL to original number>>>>\n");
           

        
        return 0;

}