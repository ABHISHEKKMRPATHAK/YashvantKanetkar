#include<stdio.h>
int main(){
    int i, marks,totalMarks=0;
    float Percentage;
    for(i=1;i<6;i++){
        printf("\nEnter marks obtained in %dth subject : ",i);                           
        scanf("%d",&marks);
        totalMarks=totalMarks+marks;                                              /* calculating total marks */
    }
    printf("total marks obtained by student is : %d\n",totalMarks);  
    Percentage = totalMarks*100/500;
    printf("Percentage is : %.2f\n",Percentage);
    return 0;
}