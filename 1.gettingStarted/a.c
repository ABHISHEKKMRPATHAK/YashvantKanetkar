#include<stdio.h>
int main(){
    int bSalary;
    float gSalary , Da , Hra;
    printf("enter basic salary of Ramesh : \nRS.");
    scanf("%d",&bSalary);
    Da= 40*bSalary/100;                                               /*calculation of Dearness Allowances*/
    printf("Dearness allowance is     : RS. %.2f\n",Da);
    Hra=20*bSalary/100;                                              /*calculation of House Rent Allowances*/
    printf("House Rent Allowances is  : RS. %.2f\n",Hra);
    gSalary=bSalary+Da+Hra;                                          /*calculation of Gross Salary*/
    printf("Gross salary of Ramesh is : RS. %.2f\n",gSalary);
    return 0 ;

}
