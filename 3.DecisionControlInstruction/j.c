/* TO CHECK WHETHER THREE POINTS LIE ON ONE STRAIGHT LINE */
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    
    printf("Enter(x1,y1)\t:");
    scanf("%d%d",&x1,&y1);

       printf("Enter(x2,y2)\t:");
       scanf("%d%d",&x2,&y2);
         
            printf("Enter(x3,y3)\t:");
            scanf("%d%d",&x3,&y3);

            if(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)==0)
            printf(" \nYES THEY LIE ON ONE STRAIGHT LINE \n");
              else 
                 printf(" \nNOTHEY DON'T LIE ON ONE STRAIGHT LINE \n");
        
return 0;

}