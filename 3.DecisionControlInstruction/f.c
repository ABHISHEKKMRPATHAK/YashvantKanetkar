/* Determine the youngest of Ram , Shyam and Ajay */
#include<stdio.h>
int main(){
    int ramAge,shyamAge,ajayAge;
    printf("ENTER AGE OF RAM \t:");
     scanf("%d",&ramAge);
      
       printf("ENTER AGE OF SHYAM \t:");
        scanf("%d",&shyamAge);
          
           printf("ENTER AGE OF AJAY \t:");
            scanf("%d",&ajayAge);
               
                if(ramAge>shyamAge&&shyamAge>ajayAge)
                  printf("\nAJAY IS THE YOUNGEST OF ALL!!\n");
                   else if(ramAge>shyamAge)
                      printf("\nSHYAM IS THE YOUNGEST OF ALL!!\n");
                      else
                         printf("\nRAM IS THE YOUNGEST OF ALL!!\n");
                         
return 0 ;

}