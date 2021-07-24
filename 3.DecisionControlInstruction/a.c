/* Profit Loss Calculation */
#include<stdio.h>
int main(){
    float costPrice,sellingPrice,profit,loss;
    printf("WHAT IS THE COST PRICE OF  YOUR ITEM :\n Rs.") ;
     scanf("%f",&costPrice);
      
         printf("WHAT IS THE SELLING PRICE OF YOUR ITEM :\n Rs.") ;
         scanf("%f",&sellingPrice);
           
            if(costPrice>sellingPrice){
                loss = costPrice-sellingPrice;
                printf("YOU HAD A LOSS OF RS.%.2f \n",loss);
            }
              if(sellingPrice>costPrice){
                  profit=sellingPrice-costPrice;
                  printf("YOU HAD A PROFIT OF RS.%.2f \n",profit);
              }
    return 0;

}