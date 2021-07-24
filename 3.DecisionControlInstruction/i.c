/* Whether area of a rectangle is greater than its perimeter or not */
#include<stdio.h>
int main(){
    int length , breadth;
    float area,perimeter;
        
         printf("Enter the length of the rectangle\t : ");
         scanf("%d",&length);
                  
         printf("Enter the breadth of the rectangle\t : ");
         scanf("%d",&breadth);

         area= length * breadth ;
         perimeter = 2 * (length+breadth);

              if(area>perimeter)
                printf("\n AREA IS GREATER THAN ITS PERIMETER\n");
                 else
                     printf("\n AREA IS NOT GREATER THAN ITS PERIMETER\n");
        
    return 0;
}
