/* validity of a triangle */
#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
     
        printf("Enter first angle of the traingle(in degree) \t:");
           scanf("%d",&angle1);
           
              printf("Enter first angle of the traingle(in degree) \t:");
                 scanf("%d",&angle2);
                   
                     printf("Enter first angle of the traingle(in degree) \t:");
                        scanf("%d",&angle3);

                        if(angle1+angle2+angle3==180)
                            printf("\n<<<<<VALID TRAINGLE>>>>>>>>\n");
                             
                              else 
                                printf("\n<<<<<<INVALID TRIANGLE>>>>>>>>\n");

return 0 ;
}