/* Combination of smallest number of denomination */
#include<stdio.h>
int main(){
    int Amount,two,five,ten,fifty,hundred, hundredRequired,fiftyRequired,tenRequired,fiveRequired,twoRequired,oneRequired;
     printf("<<<<<<<<<<<<<<NOTES AVAILABLE>>>>>>>>>>>>>Re.1<<Re.2<<Re.5>>>Re.10<<Re.50>>><<Re.100>>>  ");
    printf("ENTER AMOUNT :\n RS.");
    scanf("%d",&Amount);
          hundredRequired=Amount/100;
                 hundred=Amount%100;
        
                       fiftyRequired=hundred/50;
                            fifty=hundred%50;
                           
                                   tenRequired=fifty/10;
                                        ten=fifty%10;
                                       
                                         fiveRequired=ten/5;
                                            five=ten%5;
                                                 
                                                  twoRequired=five/2;
                                                    two=five%2;

                                                             oneRequired=two/1;
      printf("TOTAL NUMBERS OF RE.100 REQUIRED :%d\n",hundredRequired);
          printf("TOTAL NUMBERS OF RE.50 REQUIRED :%d\n",fiftyRequired);
             printf("TOTAL NUMBERS OF RE.10 REQUIRED :%d\n",tenRequired);
                 printf("TOTAL NUMBERS OF RE.5 REQUIRED :%d\n",fiveRequired);
                      printf("TOTAL NUMBERS OF RE.2 REQUIRED :%d\n",twoRequired);
                         printf("TOTAL NUMBERS OF RE.1 REQUIRED :%d\n",oneRequired);
      return 0;
}